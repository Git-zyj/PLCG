/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6760
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))) : (8589764885188410811ULL)));
                        var_15 = ((/* implicit */unsigned short) var_8);
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                            arr_15 [i_0] [i_0] = ((((/* implicit */_Bool) ((long long int) -2000367496))) ? (((arr_13 [i_0] [i_0] [i_0 + 2] [i_3] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_2 [i_1 + 4]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528))));
                            var_16 = var_1;
                        }
                        for (short i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) arr_11 [i_1 + 1] [i_1 + 1] [i_0 + 2] [i_0 - 1] [i_0 + 1]);
                            var_18 = ((/* implicit */signed char) arr_8 [i_0] [i_2] [i_5] [i_3]);
                            arr_20 [i_0] [i_1] [i_5] [i_3] [i_5] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-9733)))) || (((/* implicit */_Bool) var_5))));
                            var_19 = var_4;
                        }
                        for (signed char i_6 = 2; i_6 < 14; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_3] [i_6] = ((/* implicit */long long int) var_0);
                            var_20 = ((/* implicit */long long int) 2000367497);
                        }
                        for (signed char i_7 = 3; i_7 < 15; i_7 += 4) 
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65528)) ? (4263764360898101811LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532)))));
                            arr_28 [i_0 + 1] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) (short)0);
                        }
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        arr_31 [i_0] [i_8] [i_8] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                        arr_32 [i_8] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65532)) ? (var_8) : (((/* implicit */unsigned long long int) -2000367496)))))));
                        arr_33 [i_0] [i_1] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0 + 1])) : (((/* implicit */int) var_5))));
                    }
                    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)21))) <= (6U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)198)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 592900887)) : (var_1)))));
                }
                var_22 = arr_0 [i_0 + 2] [i_1 - 2];
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_0))));
    var_24 |= ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 3; i_10 < 8; i_10 += 3) 
        {
            {
                var_25 = ((/* implicit */int) var_0);
                arr_38 [i_10 - 3] [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_18 [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */int) arr_8 [i_9] [i_9] [i_9] [i_9]))))), (max((((/* implicit */unsigned long long int) (short)0)), (var_6)))))) ? (var_1) : ((~(5911138773161869077ULL)))));
                arr_39 [i_9] [i_9] = var_11;
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 11; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 2) 
                    {
                        {
                            var_26 &= ((/* implicit */unsigned long long int) min((-2000367494), (((((/* implicit */_Bool) arr_1 [i_10 + 1] [i_11 - 1])) ? (arr_1 [i_10 + 2] [i_11 + 1]) : (arr_1 [i_10 - 3] [i_11 + 1])))));
                            var_27 = ((/* implicit */int) var_11);
                            arr_45 [i_9] [i_10] [i_11] [i_9] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_44 [i_9] [i_9] [i_9] [i_9]))))));
                            var_28 = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)22169)), (9223372036854775807LL)));
                        }
                    } 
                } 
                arr_46 [i_9] = ((/* implicit */signed char) arr_12 [i_9] [i_9] [i_9] [i_9] [i_9]);
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */int) ((signed char) var_10))), (((((/* implicit */_Bool) 17294879636844818369ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))));
}
