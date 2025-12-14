/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90819
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((min((arr_0 [i_0 + 1] [i_0 + 2]), (arr_0 [i_0 - 2] [i_0 - 2]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1]))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((16ULL), (((/* implicit */unsigned long long int) 4235095617U))))) ? (((((/* implicit */_Bool) (short)4080)) ? (134215680) : (((/* implicit */int) (unsigned char)36)))) : (((/* implicit */int) (unsigned char)89))))) ? (((long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1] [i_2] [i_0 + 2])) ? (var_18) : (((/* implicit */int) (signed char)58))))) : (((/* implicit */long long int) (~(var_0))))));
                        arr_9 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) -134215681)), (arr_0 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (-134215674))) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_5 [(signed char)9] [i_1] [i_2] [i_3]))))))));
                        var_21 ^= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 894779601401999142ULL)) ? (((/* implicit */unsigned int) 134215681)) : (arr_0 [i_3 + 1] [i_1 + 1]))));
                    }
                    var_22 = ((/* implicit */short) min((arr_1 [i_1] [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2 + 3])) : (134215671)))))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) (~(-134215681)));
    var_24 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (signed char)118)) == ((+(((/* implicit */int) (signed char)-32)))))))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_14)) == (max((((/* implicit */unsigned int) -134215681)), (2799706879U)))));
}
