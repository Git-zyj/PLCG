/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5932
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((6917529027641081856ULL), (((/* implicit */unsigned long long int) max(((short)5943), ((short)5943))))))) ? (10888488571185315563ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)20305), ((short)-20292)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_0] [i_0] [(short)19] = ((/* implicit */_Bool) arr_11 [i_0]);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [7ULL] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [(unsigned char)4] [i_1] = (short)-26639;
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((min((((/* implicit */long long int) (unsigned char)24)), (0LL))) >> (((((/* implicit */int) (short)-5944)) + (5956))))), (((/* implicit */long long int) (signed char)32))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (short)-20269)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-90)))), (((/* implicit */int) (unsigned char)112)))), (var_5)));
    var_13 = ((/* implicit */_Bool) (unsigned short)11);
}
