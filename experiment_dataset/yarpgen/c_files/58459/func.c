/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58459
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
    var_16 = ((/* implicit */short) var_7);
    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_2)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) var_2)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_2 [i_3 - 2] [i_3 + 1])))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) var_14);
                            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_5 [i_0]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)29122)) : (((/* implicit */int) (signed char)108)))))))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                var_21 ^= ((unsigned short) ((((/* implicit */int) (unsigned short)29122)) & (((/* implicit */int) (unsigned short)65526))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) arr_18 [i_5] [i_6])) : (((/* implicit */int) (unsigned short)9))))) ? (((((/* implicit */_Bool) (unsigned short)38444)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (unsigned short)9)))) : (max((var_0), (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
