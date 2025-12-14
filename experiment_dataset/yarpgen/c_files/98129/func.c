/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98129
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_18 = ((/* implicit */int) ((576460752303423488ULL) | (12965088142115622301ULL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_19 = ((/* implicit */int) ((short) (-(((/* implicit */int) arr_7 [i_1])))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
        {
            var_20 += ((/* implicit */signed char) var_7);
            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (!((_Bool)0))))));
            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) arr_6 [i_2])))));
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
        {
            arr_12 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_1]))))), (((((/* implicit */long long int) ((/* implicit */int) var_11))) - (arr_4 [i_3])))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3445008359U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_3])) ? (arr_11 [i_1] [i_3]) : (arr_11 [i_1] [i_3])))) : ((-(var_3)))));
            var_24 = 4198979856U;
        }
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(95987439U)))) ? (((int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7)))))));
    }
    for (long long int i_4 = 1; i_4 < 8; i_4 += 2) 
    {
        var_26 &= ((/* implicit */unsigned long long int) max((-1), (((/* implicit */int) (unsigned short)15))));
        arr_15 [i_4 + 1] [i_4 - 1] = 1080863910568919040ULL;
    }
    var_27 = ((/* implicit */int) (~(var_1)));
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((long long int) max((var_16), (((/* implicit */unsigned int) arr_9 [i_7]))))))));
                var_29 ^= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_16)) : (18446744073709551615ULL));
                var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2929979123U)))))));
            }
            arr_23 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_5] [i_6])) ? (((long long int) (-(-1664693248)))) : (((((arr_4 [i_5]) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))))) + (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))))));
            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (unsigned char)13))));
            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) arr_21 [i_6] [i_6] [i_6] [i_5]))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_33 = (((~(((/* implicit */int) (unsigned char)249)))) != (((/* implicit */int) (signed char)(-127 - 1))));
            var_34 = ((/* implicit */long long int) (+(((/* implicit */int) min(((signed char)-64), ((signed char)106))))));
        }
        var_35 = ((/* implicit */unsigned int) ((long long int) 529300458193782606LL));
    }
    for (int i_9 = 2; i_9 < 14; i_9 += 2) 
    {
        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((unsigned short) var_9)))));
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    {
                        var_37 = ((/* implicit */unsigned char) var_1);
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((+(95987440U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8)))))) + (((((/* implicit */_Bool) 65535U)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (signed char)108))))));
                        var_39 = ((/* implicit */unsigned int) arr_37 [i_12] [i_11] [i_10] [i_10] [i_10] [i_9 - 1]);
                        arr_39 [i_12] [i_11] [i_10] [i_10] [i_10] [i_9] &= ((/* implicit */_Bool) 95987440U);
                        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) -6824832701327833807LL))));
                    }
                } 
            } 
        } 
    }
    var_41 = ((/* implicit */unsigned short) var_13);
}
