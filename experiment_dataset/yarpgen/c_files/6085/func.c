/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6085
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) var_7);
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min(((-(arr_0 [i_1 + 2]))), (((/* implicit */long long int) min((1191057010), (((/* implicit */int) (_Bool)1))))))))));
                var_22 = ((/* implicit */unsigned short) var_14);
                var_23 = ((/* implicit */int) max((var_23), (min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1 - 1]))) == (arr_0 [i_0 + 2])))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1])) : (((((/* implicit */_Bool) (unsigned short)53268)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)73))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_24 ^= ((short) arr_6 [i_2]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((-55520617) == (-1639631408))))))))));
            var_26 ^= (((~(var_15))) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)26)) == (var_3)))));
        }
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
        {
            arr_11 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (~((-2147483647 - 1)))))))) ? (((/* implicit */int) (unsigned short)63336)) : (((/* implicit */int) ((short) var_14)))));
            var_27 = ((/* implicit */int) (short)-23065);
        }
    }
    var_28 = ((/* implicit */short) max((16776960U), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_18)), (var_4))))));
}
