/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58251
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (unsigned short)27006);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) max((min((1320388746U), (((/* implicit */unsigned int) (short)-12574)))), (((2974578549U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2] [i_3 + 1])))))));
                            arr_11 [(unsigned short)18] [i_0] [(unsigned short)18] [i_1] [(unsigned char)10] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) arr_2 [i_0 - 2])), (var_11))), (((/* implicit */unsigned short) ((short) (unsigned char)1)))));
                            var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)130)) << (((/* implicit */int) arr_7 [i_0 + 1] [(_Bool)1] [i_2])))) | (((/* implicit */int) min((arr_7 [i_0 + 1] [i_1] [i_0 - 3]), (arr_7 [i_0 - 2] [i_1] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 ^= ((/* implicit */long long int) (_Bool)0);
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2974578536U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 10990080239333952207ULL))))))));
}
