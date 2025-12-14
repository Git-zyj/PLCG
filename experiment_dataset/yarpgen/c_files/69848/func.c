/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69848
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)127))));
        var_15 = ((/* implicit */unsigned long long int) (unsigned short)30919);
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) >> (((var_13) + (3079742584115223315LL)))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 3; i_2 < 23; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((unsigned int) var_10));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_6))));
                        }
                    } 
                } 
            } 
            arr_14 [i_2] [i_1] = ((/* implicit */long long int) ((unsigned char) ((long long int) var_1)));
        }
        for (short i_6 = 1; i_6 < 23; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (unsigned int i_8 = 2; i_8 < 23; i_8 += 1) 
                {
                    for (unsigned int i_9 = 3; i_9 < 23; i_9 += 1) 
                    {
                        {
                            var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)4192)), (((((/* implicit */int) (unsigned short)22)) + (((/* implicit */int) var_1))))))) ? (min((((/* implicit */unsigned long long int) ((unsigned int) var_11))), ((-(var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_12 [i_1] [i_6] [i_7] [i_8 + 1] [i_9]))) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) var_2)))))));
                            arr_24 [i_1] [i_6] [i_7] [i_8 + 1] [i_8] [i_9] = ((/* implicit */unsigned char) (signed char)54);
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) arr_18 [i_6 - 1] [i_9] [i_9 - 3] [i_9 - 1])), (arr_6 [i_6 - 1] [i_8 - 2] [i_8 - 2] [i_9 + 1]))), ((+(var_7))))))));
                            arr_25 [i_1] [i_6 + 1] [i_6 - 1] [i_7] [i_8 - 1] [i_9 - 2] = ((/* implicit */unsigned int) (unsigned char)7);
                        }
                    } 
                } 
            } 
            var_21 &= ((/* implicit */unsigned char) max((((long long int) var_8)), (((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1]))));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                for (unsigned int i_11 = 3; i_11 < 22; i_11 += 2) 
                {
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_12 [i_6 + 1] [i_6 + 1] [i_11 - 1] [i_11 - 3] [i_11 - 2]))), (((/* implicit */long long int) ((unsigned short) arr_12 [i_6 - 1] [i_6 + 1] [i_11 - 3] [i_11 - 1] [i_11 + 2])))))));
                        var_23 = ((/* implicit */unsigned int) ((min((arr_1 [i_6 + 1] [i_11 + 1]), (-8680196165808135516LL))) != (((((/* implicit */_Bool) arr_1 [i_6 + 1] [i_11 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16496))) : (-8680196165808135516LL)))));
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(var_3)))))) ? (max((((/* implicit */long long int) (-(0U)))), (((((/* implicit */_Bool) arr_5 [i_12] [i_1] [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))))));
            var_25 = ((/* implicit */unsigned char) 1133592718987586013LL);
        }
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_7))));
    }
    var_27 = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))) * ((~(4294967295U))));
}
