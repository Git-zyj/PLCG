/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78378
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
    var_15 = ((((/* implicit */int) ((((((/* implicit */int) var_1)) % (((/* implicit */int) (unsigned char)180)))) != ((+(((/* implicit */int) (unsigned short)65535))))))) != (((/* implicit */int) var_12)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_16 += ((/* implicit */long long int) arr_0 [i_0 + 2]);
        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) >= (((/* implicit */int) arr_0 [i_0 + 4])))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1 + 1] [i_3 + 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_3]))))) >> (((min((((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_3])), (var_3)))), (min((arr_5 [i_3] [(_Bool)1]), (((/* implicit */long long int) arr_3 [i_0 + 1] [i_1 + 1] [i_3])))))) - (110LL))))))));
                        arr_9 [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */int) (unsigned short)2)), (-1313599228))), (((/* implicit */int) (signed char)-104))));
                        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned char)147))));
                        arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_2] [i_3] = ((/* implicit */unsigned short) var_0);
                    }
                } 
            } 
        } 
        var_20 += ((/* implicit */unsigned int) arr_5 [8LL] [(short)0]);
    }
    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 2) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned short) var_2);
        var_22 = ((/* implicit */_Bool) arr_12 [i_4] [i_4]);
        arr_15 [i_4] = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_14 [i_4 + 4])), (arr_12 [i_4 - 1] [i_4 + 1]))), (((/* implicit */unsigned int) var_13))));
    }
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533))) | (4721471552011784659ULL))), (((/* implicit */unsigned long long int) arr_18 [i_5] [i_5])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    for (long long int i_8 = 2; i_8 < 14; i_8 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)28966)) >= (((/* implicit */int) (unsigned short)2))));
                            /* LoopSeq 1 */
                            for (signed char i_9 = 2; i_9 < 13; i_9 += 3) 
                            {
                                arr_27 [i_5] [i_6] [i_7] [i_7] [i_9] = (-(((/* implicit */int) var_10)));
                                var_25 += ((/* implicit */long long int) ((signed char) arr_19 [i_6] [(short)5]));
                            }
                        }
                    } 
                } 
                var_26 |= ((/* implicit */signed char) ((unsigned int) ((((arr_23 [i_5] [i_6] [i_6]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) | (((/* implicit */int) arr_23 [i_5] [i_6] [i_5])))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_3);
}
