/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65000
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((unsigned long long int) ((short) ((short) arr_3 [i_0] [i_1]))));
                var_15 += ((/* implicit */unsigned char) ((_Bool) ((_Bool) ((arr_1 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                var_16 = ((/* implicit */short) ((((((/* implicit */int) ((_Bool) (short)-25841))) | (((/* implicit */int) ((unsigned char) 4294705152U))))) >> (((((/* implicit */int) ((unsigned short) (short)-25844))) - (39667)))));
                var_17 *= ((/* implicit */unsigned int) ((short) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (short)23897))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 14; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned short i_5 = 3; i_5 < 12; i_5 += 2) 
                    {
                        for (short i_6 = 1; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_16 [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_5] = ((/* implicit */short) ((signed char) ((unsigned char) ((unsigned int) (_Bool)1))));
                                var_18 ^= ((/* implicit */int) ((_Bool) ((short) ((unsigned short) var_0))));
                                arr_17 [i_2] [i_6] [i_5] = ((/* implicit */_Bool) ((unsigned int) ((unsigned char) ((unsigned char) var_8))));
                                var_19 += ((/* implicit */unsigned int) ((((unsigned long long int) ((short) var_10))) > (((/* implicit */unsigned long long int) ((((long long int) (short)-25839)) | (((/* implicit */long long int) ((int) (unsigned char)82))))))));
                                arr_18 [i_2 - 1] [i_2] [i_2] [i_5] [(unsigned short)11] [i_6 + 1] = ((/* implicit */short) ((unsigned short) ((short) ((unsigned char) (signed char)-30))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_2] [i_2] = ((/* implicit */unsigned char) ((((unsigned long long int) ((unsigned short) (signed char)100))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (signed char)25))) >= (((/* implicit */int) ((_Bool) var_8)))))))));
                var_20 = ((/* implicit */unsigned int) ((unsigned char) -6));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((_Bool) ((int) ((((/* implicit */_Bool) (unsigned short)44596)) || (((/* implicit */_Bool) (short)-32760))))));
    var_22 = ((short) ((unsigned char) (-9223372036854775807LL - 1LL)));
}
