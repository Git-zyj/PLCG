/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64958
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
    var_10 = ((/* implicit */long long int) ((((var_9) - (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) + (((unsigned long long int) (_Bool)1))));
    var_11 *= ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) arr_1 [i_0]);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_12 [i_1] [i_2] [i_1] [(signed char)5] [i_1] = ((/* implicit */unsigned char) ((unsigned int) arr_11 [i_3]));
                            var_12 -= ((/* implicit */short) (+((((_Bool)1) ? (11364887533931438378ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((int) (unsigned char)255));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 3; i_4 < 13; i_4 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) arr_15 [i_4]);
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_14 [i_4 - 1]))))))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) | (15392354651188635115ULL))) : (((/* implicit */unsigned long long int) arr_16 [i_4 - 3]))));
            arr_21 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(3555878313U)))))) ? (var_5) : (((/* implicit */int) ((short) arr_19 [i_4 + 2] [i_5])))));
            var_15 *= ((/* implicit */short) ((long long int) arr_14 [i_5]));
            var_16 = ((/* implicit */unsigned int) ((_Bool) (((_Bool)1) || ((_Bool)1))));
        }
        for (unsigned short i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            arr_25 [i_6] = ((/* implicit */unsigned short) (~((~(17672405049588133729ULL)))));
            arr_26 [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-9223372036854775804LL)));
            arr_27 [i_4] [(unsigned short)10] [i_6] = ((/* implicit */short) var_3);
        }
        var_17 = ((/* implicit */long long int) (unsigned short)33064);
        arr_28 [i_4] = arr_18 [8ULL];
        arr_29 [i_4] [i_4 - 2] = ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_18 [(short)2])))) & (((((/* implicit */int) (unsigned char)64)) & (((/* implicit */int) var_4)))))) | (((/* implicit */int) var_3))));
    }
}
