/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64137
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)7), (((/* implicit */unsigned short) (unsigned char)38)))))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 15088403304078994982ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) + (var_1)))) && (((/* implicit */_Bool) (~(var_18))))))) : (((/* implicit */int) (((~(4286578688U))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_11)))))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 2; i_4 < 9; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)46138)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [3ULL] [i_2 - 1] [i_2]))) < (604436328127899047LL)))))) == ((+(((/* implicit */int) arr_1 [i_2 - 1]))))));
                    var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 + 2] [i_3]))))), (((/* implicit */unsigned long long int) ((int) arr_3 [(unsigned char)14] [i_4 + 1])))));
                    var_23 = ((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (max((max((1827944372), (((/* implicit */int) arr_6 [i_3] [(_Bool)1])))), (((/* implicit */int) ((_Bool) var_6))))) : (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_11)))))));
                    var_24 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)46139)) ? (2256954326U) : (((/* implicit */unsigned int) 1827944372)))), (((/* implicit */unsigned int) (((-(((/* implicit */int) var_4)))) / (((/* implicit */int) ((signed char) var_16))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5 - 1] [i_5 + 2]))))) ^ (((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5 - 1] [(short)16]))))))));
        var_26 += ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) arr_0 [1ULL]))))) ? (((/* implicit */long long int) -1827944372)) : (var_9))));
    }
}
