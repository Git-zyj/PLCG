/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86997
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] |= ((/* implicit */int) var_11);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] = (-(max((1991587408U), (((/* implicit */unsigned int) var_10)))));
                        var_16 = ((/* implicit */unsigned char) var_5);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (int i_5 = 1; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) 1991587408U)) == (2196276263298804872LL)))))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 193859152347476345LL))))) : (((/* implicit */int) var_3))));
                                var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))) <= (4U)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) ((_Bool) min((2303379889U), (1991587420U))));
                }
                for (unsigned char i_6 = 2; i_6 < 18; i_6 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */int) 440035548U);
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (~(2382129132U))))) ? (((/* implicit */int) ((min((var_13), (var_13))) == (var_13)))) : (((/* implicit */int) ((arr_16 [i_1] [i_0] [i_0] [i_6 + 1] [i_0] [i_6] [i_6]) >= (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_0] [i_6 + 1] [i_6])))))));
                    var_23 = ((/* implicit */unsigned char) var_2);
                }
            }
        } 
    } 
    var_24 |= ((/* implicit */unsigned char) -1619623184);
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        for (int i_8 = 1; i_8 < 12; i_8 += 2) 
        {
            {
                var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max(((signed char)-24), (arr_8 [i_7] [(short)8] [i_8])))), (((unsigned int) var_11))));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-114)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_7 [i_7] [(unsigned char)1])))) : (((/* implicit */int) (unsigned char)51))))) : (((unsigned int) var_14)))))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_15)), (1075858524)))) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) ((var_4) <= (var_5))))));
                var_28 *= ((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_10)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) / (440035552U))))) << (((((/* implicit */int) ((signed char) max((587361727), (arr_10 [i_7] [(signed char)6] [(signed char)6] [(signed char)4] [i_8 + 4] [i_8]))))) + (85)))));
                var_29 -= ((/* implicit */short) min((max((((8433246735071350939LL) >> (((115500655) - (115500603))))), (((/* implicit */long long int) ((13U) + (((/* implicit */unsigned int) 1090076251))))))), (((/* implicit */long long int) min((var_15), (((/* implicit */signed char) ((_Bool) (unsigned char)66))))))));
            }
        } 
    } 
}
