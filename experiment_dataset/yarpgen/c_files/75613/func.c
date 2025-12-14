/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75613
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 2021850483)) + (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54018))) + (2779750687U))), (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) var_6)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_15 = ((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_9))) + (var_1)))) > (max((var_0), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) 174891665)) < (2779750680U)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 &= ((/* implicit */short) var_12);
                    arr_7 [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)-27699)), ((unsigned short)43085)))) % (((/* implicit */int) ((signed char) ((-2308601468848293507LL) ^ (((/* implicit */long long int) 491105908U))))))));
                    arr_8 [i_2] [i_1] [i_2] |= ((/* implicit */_Bool) arr_1 [i_2] [i_1]);
                    var_17 = ((unsigned int) ((int) arr_5 [i_0 - 1] [i_1] [i_1] [i_1]));
                    var_18 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_1] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_2]))) : (((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) ^ (((/* implicit */int) var_9))))))) || (((/* implicit */_Bool) ((long long int) (+(-2021850484)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) max(((+(((int) var_3)))), (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((signed char) var_0)))));
        arr_13 [i_3] = var_10;
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            for (long long int i_5 = 3; i_5 < 18; i_5 += 2) 
            {
                {
                    arr_19 [i_5] [i_4] [18] = ((/* implicit */unsigned char) max((arr_16 [i_3]), (((/* implicit */unsigned short) ((short) arr_17 [i_5 - 3] [i_4 + 2] [i_3])))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) (+(min((((-1561748688480951447LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))))), (((/* implicit */long long int) (_Bool)1))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-27686))) ^ (755677933U))) | (arr_20 [i_5 + 1] [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_3 - 1])))));
                        arr_22 [i_3 - 1] [i_3] [i_4 - 1] [i_5] [i_5] [i_6] = ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (var_8) : (((/* implicit */long long int) var_1))))) != (min((((/* implicit */unsigned long long int) var_4)), (arr_9 [i_3]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 4; i_8 < 18; i_8 += 2) 
                        {
                            {
                                arr_28 [i_3] [i_3] [i_3] [i_7] [i_3] = ((/* implicit */unsigned long long int) arr_17 [i_8] [8] [i_4 + 2]);
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1342592946U)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_9 = 1; i_9 < 22; i_9 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (unsigned char)83))));
        arr_31 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) == (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_30 [i_9] [i_9]))))) ? (((/* implicit */int) ((unsigned char) arr_30 [i_9] [i_9]))) : (((int) arr_29 [i_9]))))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((_Bool) arr_30 [2LL] [2LL])))));
    }
    var_26 *= var_0;
}
