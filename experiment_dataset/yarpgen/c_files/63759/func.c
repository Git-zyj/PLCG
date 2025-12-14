/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63759
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32762)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (short)-16114)), (1299335837)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) var_1);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((arr_4 [i_1] [(_Bool)1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (short)16117))));
        var_20 = ((/* implicit */unsigned long long int) var_4);
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        var_21 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (((_Bool)1) ? (15602450057672350830ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148)))))) ? (((/* implicit */int) (signed char)102)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)2040)) : (((/* implicit */int) (short)32765))))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-97)) * (((/* implicit */int) (short)-2040))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
            {
                for (signed char i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    {
                        arr_23 [(unsigned char)14] [i_5] [i_5] [i_3] = ((/* implicit */short) (((~(((/* implicit */int) arr_17 [i_5 - 1] [i_4 - 2])))) | (((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) (short)2043)) : (((/* implicit */int) (signed char)1))))));
                        arr_24 [i_6] [i_5] = ((/* implicit */unsigned long long int) min(((unsigned char)227), (((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_5 - 1])) >= (((/* implicit */int) (unsigned char)31)))))));
                        var_24 += ((/* implicit */unsigned char) var_8);
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */int) var_13);
    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) : (min((((((/* implicit */_Bool) var_2)) ? (483198590U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) var_10)))))))));
}
