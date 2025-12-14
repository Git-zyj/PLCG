/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95007
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
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] [i_0 + 1] = (+(arr_1 [i_0 - 1]));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((unsigned long long int) ((_Bool) var_9))))));
        var_20 &= ((/* implicit */_Bool) (signed char)51);
        var_21 = ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [10ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1]))) ? ((+(((/* implicit */int) arr_4 [i_1])))) : (((arr_5 [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
        var_22 = var_9;
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)183))));
        var_24 = ((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned short)65532)))), (((/* implicit */int) ((short) ((unsigned short) var_12))))));
        /* LoopSeq 3 */
        for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            var_25 = var_9;
            arr_15 [i_3] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)166))));
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1)))))));
                var_27 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12))))))))));
                var_28 = ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned char)194))))));
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 2) /* same iter space */
            {
                arr_20 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [14U] [14U] [i_5 - 2]))));
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((unsigned long long int) (unsigned short)65528))));
                arr_21 [i_5] [i_2] [4ULL] [i_2] = ((/* implicit */unsigned long long int) arr_11 [i_2] [i_3]);
            }
            for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_3] [i_3]))));
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_14 [i_3 + 1] [i_6 - 2]), (((/* implicit */unsigned short) (unsigned char)174))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_3]))) : ((+(var_16))))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (-(max((((((/* implicit */_Bool) var_0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_24 [i_3] [i_7] [i_6])))), (((/* implicit */unsigned long long int) var_2)))))))));
                            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_6]))));
                            arr_29 [i_2] [i_2] = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_9 = 2; i_9 < 20; i_9 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                arr_34 [i_10] [i_2] |= ((/* implicit */unsigned short) var_16);
                var_34 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (!(arr_17 [i_2] [i_2] [i_10] [i_9]))))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_37 [i_2] [i_9] [(unsigned char)0] [i_11] = ((/* implicit */unsigned int) arr_26 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 2]);
                arr_38 [i_11] [i_9] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) 715941772U));
            }
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                var_35 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_9 - 1] [i_9 - 2]))));
                arr_43 [i_12] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)55437))))));
                var_36 = ((/* implicit */unsigned long long int) ((signed char) (-(arr_41 [i_2] [i_2] [i_2]))));
                arr_44 [i_2] [i_2] [i_2] [(unsigned short)1] = ((/* implicit */unsigned long long int) arr_33 [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 - 2]);
                var_37 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_2] [12ULL]))));
            }
            /* LoopNest 2 */
            for (unsigned short i_13 = 1; i_13 < 19; i_13 += 2) 
            {
                for (int i_14 = 1; i_14 < 19; i_14 += 2) 
                {
                    {
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) arr_8 [i_2]))));
                        arr_50 [i_9] [i_13] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_25 [i_2] [i_9] [i_13] [i_9] [i_9])))))))));
                    }
                } 
            } 
            arr_51 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) (unsigned short)12151);
        }
        for (unsigned int i_15 = 2; i_15 < 20; i_15 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                var_39 += ((/* implicit */_Bool) (unsigned char)74);
                arr_56 [i_2] [i_2] [11U] [i_2] = ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) var_5)));
                var_40 = ((/* implicit */unsigned int) ((unsigned long long int) (~((-(18446744073709551615ULL))))));
                var_41 = ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
            }
            arr_57 [i_2] = ((/* implicit */_Bool) (-(20LL)));
            var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_5))))))));
        }
        arr_58 [i_2] = ((/* implicit */_Bool) 4998296832643389862LL);
        var_43 = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) (!(((/* implicit */_Bool) var_6))))));
    }
    var_44 = ((/* implicit */unsigned short) var_13);
    var_45 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((int) var_4))) ? (var_15) : (((/* implicit */int) var_5))))));
    var_46 = ((/* implicit */signed char) (~(var_10)));
}
