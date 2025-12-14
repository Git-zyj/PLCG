/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81340
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((long long int) ((short) (~(((/* implicit */int) (_Bool)1)))))))));
        var_17 = ((/* implicit */short) (unsigned short)0);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_18 &= ((/* implicit */unsigned long long int) ((long long int) 15ULL));
        arr_5 [i_1 + 2] = arr_3 [i_1];
        arr_6 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1 + 1]))));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    arr_13 [(unsigned short)13] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((18446744073709551601ULL), (max((((/* implicit */unsigned long long int) 0)), (var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 27ULL)) ? (5194443304321952505ULL) : (((/* implicit */unsigned long long int) 8830539616774822148LL))))))) : (((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44099)))))));
                    var_20 = ((/* implicit */unsigned int) ((unsigned char) (short)24364));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) 2803527220U)))), (((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8369)))))));
                        var_22 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(17)))) + ((((+(796979550062096483ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9055)) ? (((/* implicit */long long int) 2630910237U)) : (arr_10 [i_2]))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_3] [i_3] = ((/* implicit */short) (((~(5194443304321952527ULL))) != (((/* implicit */unsigned long long int) 12LL))));
                        arr_20 [i_2] [1ULL] [i_3] [1ULL] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 13156092446424274698ULL)) ? (13252300769387599077ULL) : (5194443304321952548ULL))) <= (((/* implicit */unsigned long long int) 2589454444U))));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((short) (-(4986829662539723259ULL))));
        arr_21 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_2]) % (((/* implicit */unsigned int) 1142778532))))) ? ((+(((long long int) 13)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3827685967U)) && (((/* implicit */_Bool) arr_4 [i_2]))))))));
    }
    var_24 ^= ((/* implicit */short) min((((/* implicit */int) var_13)), ((((-(((/* implicit */int) (unsigned short)43999)))) | (((/* implicit */int) min((((/* implicit */unsigned short) (short)30671)), ((unsigned short)44999))))))));
    var_25 = ((/* implicit */unsigned char) ((_Bool) 3827685967U));
    var_26 = max((((/* implicit */long long int) ((max((((/* implicit */int) (signed char)-116)), (1922863037))) + (((/* implicit */int) ((unsigned short) 3365330437968543860LL)))))), (((min((3365330437968543865LL), (((/* implicit */long long int) (signed char)115)))) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 8925858798285826085ULL)))))));
    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (_Bool)1))));
}
