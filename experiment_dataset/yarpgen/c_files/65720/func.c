/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65720
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
    var_11 = 4294967295U;
    var_12 = ((/* implicit */unsigned long long int) ((unsigned int) (-(((unsigned long long int) (short)7643)))));
    var_13 ^= ((/* implicit */signed char) (unsigned char)10);
    var_14 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) 4633208723348121379LL)) || (((/* implicit */_Bool) (signed char)127)))))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) 4633208723348121379LL)) : (5ULL)));
                            var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)82)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4633208723348121379LL)) && (((/* implicit */_Bool) -4633208723348121379LL))))) : (((((/* implicit */_Bool) 3)) ? (289715311) : (((/* implicit */int) (unsigned char)111))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)2044))) ? (((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned char)15)))) : (((/* implicit */int) (unsigned char)43))));
                        }
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218)))))) ? ((~(2994839209288186646ULL))) : (((/* implicit */unsigned long long int) -93941889))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((_Bool) -4633208723348121392LL)))));
                        var_21 -= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 805687264U))))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) >= (4633208723348121392LL))))));
                    }
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        arr_21 [(unsigned char)19] [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)241))));
                        var_22 = ((/* implicit */short) ((((((((/* implicit */_Bool) -4633208723348121392LL)) ? (((/* implicit */unsigned int) 93941897)) : (3765933278U))) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) >= (-769002817304827895LL))))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) * (10611959358942230633ULL))) == (((/* implicit */unsigned long long int) (~(805687264U)))))))));
                    }
                    var_23 -= ((/* implicit */_Bool) ((int) ((((unsigned int) 4633208723348121384LL)) >> (((65011712) - (65011701))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16376))) * (16479083269976210105ULL)));
                }
            } 
        } 
    } 
}
