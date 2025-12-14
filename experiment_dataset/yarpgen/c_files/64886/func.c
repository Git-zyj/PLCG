/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64886
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
    var_13 = ((/* implicit */signed char) (!(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20210))))) >= (var_4)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned long long int) 3533536196U)) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))))) ? ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_10) : (arr_0 [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_1) & (((/* implicit */int) var_5))))) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) var_1)))))))));
        var_15 = ((/* implicit */unsigned short) (unsigned char)241);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_16 = ((/* implicit */signed char) (~(-9223372036854775805LL)));
        var_17 = ((/* implicit */signed char) ((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67)))));
    }
    var_18 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) >= (((/* implicit */int) max((((/* implicit */signed char) ((_Bool) var_10))), (((signed char) var_11)))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 24; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_19 ^= ((/* implicit */signed char) (((((~(((/* implicit */int) (unsigned char)4)))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned char)2)) ? (arr_6 [i_6 + 1]) : (arr_6 [i_4]))) + (1189485918)))));
                                var_20 = ((/* implicit */int) (-(arr_7 [i_4])));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */signed char) (unsigned char)12);
            }
        } 
    } 
}
