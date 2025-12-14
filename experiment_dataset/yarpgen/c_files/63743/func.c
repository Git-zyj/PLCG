/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63743
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) var_5))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_5)))));
        /* LoopSeq 4 */
        for (int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            var_10 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_3)))) && (((/* implicit */_Bool) arr_1 [i_0]))));
            var_11 = ((/* implicit */short) ((((((/* implicit */int) var_6)) << (((arr_5 [i_0] [i_1]) + (1539505916351627611LL))))) >= (((/* implicit */int) var_4))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */short) var_1);
            arr_9 [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(-2079144130)))) >= (1ULL)));
            arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((long long int) (short)511));
        }
        for (short i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
        {
            var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_7 [i_3] [i_0])))) ? (((/* implicit */int) (unsigned short)58069)) : (((/* implicit */int) ((short) var_6)))));
            var_13 = ((/* implicit */short) ((((arr_6 [i_3] [i_3]) + (2147483647))) >> (((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) - (28817)))));
        }
        for (short i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_1))));
            var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_6 [i_0] [i_4]))) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)202)))))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    {
                        arr_19 [i_5] [i_0] [i_5] [i_6] [i_4] [i_5] = ((/* implicit */unsigned short) ((unsigned char) (signed char)-64));
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned int) arr_7 [i_0] [i_5])))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
    {
        var_17 = ((((/* implicit */int) arr_15 [i_7] [i_7])) / (2079144151));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_20 [i_7])))) || (((/* implicit */_Bool) arr_12 [i_7] [i_7]))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                for (int i_10 = 2; i_10 < 20; i_10 += 3) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)79))) & (-1LL)))) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (short)32754))));
                        arr_34 [i_7] [i_7] [i_7] [i_10] [i_7] = ((/* implicit */signed char) var_9);
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                        arr_35 [i_8] [i_10] [i_10] = ((/* implicit */short) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) var_7);
                    var_22 = ((/* implicit */unsigned char) ((short) -1LL));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_9)) << (((((/* implicit */int) var_9)) - (17060)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 671660801)))))) >= (var_0)))) : (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)10)))))))));
    var_24 *= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((long long int) var_5))) ? ((+(2147483647))) : (((/* implicit */int) ((unsigned short) (short)7550))))));
    var_25 = ((/* implicit */int) var_9);
}
