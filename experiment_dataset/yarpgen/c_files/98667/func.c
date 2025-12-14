/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98667
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (((((_Bool)1) ? (628485195691904179LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */long long int) ((/* implicit */int) ((short) -7806813194657099810LL))))));
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_8)))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4 - 1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 - 1] [13U] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_17)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */int) arr_0 [i_4] [i_2])) : (((/* implicit */int) var_14))))) : ((+(var_9)))))) : ((-(var_16)))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) var_17);
                }
                for (unsigned short i_5 = 2; i_5 < 16; i_5 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) (+((-((+(1272060118U)))))));
                    var_23 = ((/* implicit */long long int) ((short) (-((-(((/* implicit */int) var_4)))))));
                }
                for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    arr_23 [i_6] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((short) var_17)))) ? (((/* implicit */int) ((short) 1312631780444905468ULL))) : (((/* implicit */int) var_4))));
                    var_24 ^= ((/* implicit */int) arr_2 [i_1]);
                    arr_24 [i_0] [i_6] = ((/* implicit */int) ((unsigned char) ((short) arr_2 [i_6 + 1])));
                    var_25 = ((/* implicit */long long int) var_8);
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (long long int i_8 = 3; i_8 < 15; i_8 += 4) 
                        {
                            {
                                arr_31 [i_0] [i_0] [9U] [i_6] [i_6] [i_8] [i_8 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_26 [i_8 + 3] [i_7] [i_7] [i_7] [i_6 - 1])) ? (arr_26 [i_8 + 1] [i_8] [i_8] [i_8 + 3] [i_6 - 1]) : (arr_26 [i_8 - 3] [i_6] [2U] [i_6 - 1] [i_6 - 1]))) | ((+((~(((/* implicit */int) (_Bool)1))))))));
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) var_12)))))));
                                var_27 = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_18 [i_6 - 1] [i_6 - 1] [i_0])))) / ((+(1272060110U)))))));
                                arr_32 [i_0] [i_1] [i_6] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2158)) ? (12043630473566586275ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_7] [i_7])) : (((/* implicit */int) arr_7 [i_6 - 1] [i_8 + 2]))))));
                            }
                        } 
                    } 
                }
                var_28 = ((/* implicit */short) var_1);
                var_29 ^= ((/* implicit */unsigned short) var_18);
            }
        } 
    } 
    var_30 = ((/* implicit */int) ((signed char) var_11));
}
