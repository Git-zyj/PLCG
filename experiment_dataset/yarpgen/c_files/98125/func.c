/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98125
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
    var_10 = ((/* implicit */short) 3469298552955199871ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_8 [(signed char)3] [(signed char)3] = ((/* implicit */unsigned long long int) (-((+(arr_7 [i_1] [i_0 - 1] [i_1 + 2] [i_0 - 1])))));
                    var_11 *= ((unsigned long long int) ((((/* implicit */int) (signed char)6)) | (((/* implicit */int) max(((short)-15020), (((/* implicit */short) (signed char)-98)))))));
                    arr_9 [i_2] [6ULL] [i_0] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)2] [i_1] [(unsigned short)0])) ? (1392284291) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */int) (short)5333)) == (((/* implicit */int) (short)32755)))))))));
                }
                var_12 = ((/* implicit */short) (unsigned short)49152);
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((short) var_0)))));
}
