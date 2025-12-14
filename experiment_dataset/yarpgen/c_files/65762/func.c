/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65762
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
    var_15 &= ((/* implicit */signed char) var_14);
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned char) -1LL))) ? (((/* implicit */int) max((var_13), (((/* implicit */short) (signed char)103))))) : (((/* implicit */int) var_5)))) >> (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_5)))))) % (((long long int) (_Bool)1))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)44979)) * (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] [(_Bool)1] |= ((/* implicit */unsigned long long int) var_1);
        arr_5 [(unsigned short)6] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)63)) >> (((((/* implicit */int) (unsigned short)4095)) - (4090)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (~(var_3)));
        var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned char)207))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_10 [i_2] [(unsigned short)12] = ((/* implicit */signed char) var_0);
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            arr_13 [i_2] [i_2] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) | (var_11));
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        arr_19 [(signed char)13] [(signed char)6] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_11)))) || (((((/* implicit */int) (signed char)70)) >= (-144727701)))));
                        arr_20 [i_2] [i_3] [i_4] [i_5] [i_5] [i_5] = ((((/* implicit */int) ((((/* implicit */int) var_7)) < (arr_8 [i_5])))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (arr_9 [i_2])))));
                        arr_21 [(signed char)12] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)21353)) * ((~(((/* implicit */int) var_12))))));
                        arr_22 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_6 [i_2]);
                        arr_23 [(signed char)6] [i_2] [(_Bool)1] [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_14 [i_2] [(unsigned char)9] [i_5])) < (((/* implicit */int) (unsigned short)61440)))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        arr_28 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)40712)))) : ((-(((/* implicit */int) (unsigned short)61440))))));
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) -1504892236)))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) var_5)) ^ (((((/* implicit */int) (signed char)47)) / (((/* implicit */int) var_4)))))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned short) arr_26 [i_6])))));
        var_22 = ((/* implicit */signed char) var_1);
    }
}
