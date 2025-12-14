/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62663
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+((+((+(((/* implicit */int) (short)(-32767 - 1))))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_16 = ((446125000522834942LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)134))));
                            var_17 -= ((/* implicit */unsigned long long int) ((short) -751135963));
                            arr_11 [i_0 - 1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) * (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (short)(-32767 - 1)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_4 = 3; i_4 < 11; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((long long int) ((unsigned char) (short)-1))))));
                                arr_20 [1] [1] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (short)10907))))));
                                arr_21 [i_5] [i_4] [i_5] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) ^ (14693144504698618608ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10907)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))) : (446125000522834942LL))))));
                                arr_22 [i_5] [i_5] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (2713682678U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */unsigned int) arr_15 [8LL] [8LL]);
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (_Bool)1);
}
