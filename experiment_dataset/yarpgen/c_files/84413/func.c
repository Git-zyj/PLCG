/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84413
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) 534773760U)))))))) > (var_12))))));
    var_19 = ((/* implicit */unsigned long long int) (((~((~(((/* implicit */int) (short)-13613)))))) * (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_6))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))))))));
    var_20 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (268435448)))) ? ((+(3549748117991363639LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) min((var_21), ((~(((((/* implicit */int) var_2)) << (((arr_4 [i_0] [(unsigned short)2]) + (5985139038926825427LL)))))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)1), (((/* implicit */unsigned char) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 268435435)), ((+((-9223372036854775807LL - 1LL))))))) : (max((8831582280284193541ULL), (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0])))))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) var_16);
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-268435448))))))) | (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) < (11686378319251347358ULL))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_19 [i_0] [i_0] = ((/* implicit */int) (+(min(((+(408320140218197590LL))), (((/* implicit */long long int) arr_16 [i_0]))))));
                            var_24 += ((/* implicit */unsigned long long int) (unsigned short)12712);
                            arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned short)12712)))))) < ((~((~(((/* implicit */int) (unsigned char)0))))))));
                            var_25 = ((/* implicit */unsigned int) (+(((min((var_10), (((/* implicit */int) var_14)))) / (((/* implicit */int) (unsigned char)9))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (unsigned short)65535))))) & (var_0)));
}
