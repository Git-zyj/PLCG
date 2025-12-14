/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82487
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
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_7))) | (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)25195))))))), (((((/* implicit */unsigned long long int) var_4)) | (min((((/* implicit */unsigned long long int) var_0)), (127ULL)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) (~(max(((~(((/* implicit */int) arr_7 [i_4] [i_2] [i_2] [i_3] [i_2] [i_0])))), (((/* implicit */int) ((-1116173707) >= (((/* implicit */int) arr_0 [i_0])))))))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) && (((/* implicit */_Bool) ((short) 3293644851U)))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) arr_8 [i_4]);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (unsigned short)25195);
                                var_20 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), ((-(-1LL)))))), (((unsigned long long int) ((int) (short)10456)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) ((signed char) (unsigned short)40340));
                    var_22 *= ((/* implicit */short) var_3);
                }
            } 
        } 
    } 
}
