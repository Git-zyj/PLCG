/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8658
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                var_14 = ((/* implicit */unsigned char) 2123149599);
                                var_15 = ((/* implicit */unsigned char) (((-(max((arr_1 [5LL]), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0])))))) & (((/* implicit */long long int) ((min((var_2), (((/* implicit */int) (signed char)71)))) & ((~(var_2))))))));
                            }
                            arr_16 [i_0] [i_0] [i_0 - 2] [9LL] [8LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (1886778153U)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1] [i_0] [(signed char)9])))))))) ^ (((/* implicit */int) ((((((/* implicit */int) arr_11 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) (unsigned short)65535)))) != ((-(((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_1] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [8] [i_0 + 1])))) + (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 2] [i_0 - 2] [i_1] [(_Bool)1] [i_1] [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)8794)))))))));
                arr_18 [6ULL] [i_1] [6ULL] |= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((short) ((short) (unsigned short)65530)))), (((long long int) 2123149588))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_10)) - (60079)))))) ? (2123149605) : (((/* implicit */int) (!(((/* implicit */_Bool) 15492592610480552285ULL)))))))), (min((((/* implicit */unsigned int) 2123149616)), (2703621607U))))))));
}
