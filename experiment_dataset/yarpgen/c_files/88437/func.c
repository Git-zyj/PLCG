/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88437
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
    var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_14)) ? ((+(var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? ((+(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_6 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_1 + 4]))) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_2])) : (((/* implicit */int) (signed char)-124))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-13633))) + (var_10))));
                                var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_3] [i_4])) : (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)124))))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)32704)) : (((/* implicit */int) (unsigned short)32844)))) + (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2]))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) ((arr_15 [i_1] [i_1]) / (((/* implicit */int) var_6))));
                    arr_17 [i_1] = (short)13649;
                }
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) arr_18 [i_0] [(signed char)11] [i_0] [i_7]);
                            var_22 = ((/* implicit */short) var_1);
                            arr_23 [i_0] [i_1] = min((arr_10 [i_0] [i_0] [i_6] [i_1] [i_0]), (((/* implicit */unsigned long long int) ((signed char) (~(arr_8 [i_1] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    for (unsigned char i_11 = 3; i_11 < 14; i_11 += 1) 
                    {
                        {
                            arr_37 [i_8] [i_9] [i_8] [i_9] = ((/* implicit */unsigned char) var_11);
                            arr_38 [i_8] = ((/* implicit */_Bool) min((max((var_11), (11684066309263390060ULL))), ((~(17670944300139689894ULL)))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8] [i_8])) ? (((int) -1278705188)) : (((((/* implicit */_Bool) (unsigned short)36714)) ? (((/* implicit */int) (unsigned char)246)) : (-1449022605))))))));
            }
        } 
    } 
}
