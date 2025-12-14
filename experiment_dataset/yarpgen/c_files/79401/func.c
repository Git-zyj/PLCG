/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79401
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 &= ((/* implicit */short) arr_0 [i_1]);
                var_13 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 3; i_2 < 9; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            arr_11 [i_3] &= ((/* implicit */int) max((min((arr_6 [i_2 + 1] [i_2 + 1]), (((/* implicit */unsigned long long int) var_10)))), (max((arr_6 [i_2 - 3] [i_2 + 2]), (((/* implicit */unsigned long long int) arr_2 [i_2 - 2]))))));
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [(unsigned char)6] [i_3]) > (((/* implicit */unsigned long long int) 4234281286U)))))) % (var_8)));
            var_15 ^= ((/* implicit */unsigned char) min((((((var_6) % (var_5))) >> ((((~(var_8))) - (7881458033404256964ULL))))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_10 [i_2] [i_3])) : (((/* implicit */int) var_4)))))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_16 [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))))) * ((-(((/* implicit */int) ((var_1) && (((/* implicit */_Bool) arr_3 [i_2] [i_2])))))))));
            var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 3421885058408287197ULL))) ? (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) : (((arr_6 [i_2 + 1] [i_2 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [8U])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((1073741824) & (arr_4 [i_2] [0U])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((var_6) - (2643296391U)))))) : (((arr_13 [6U] [i_4] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
        }
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) 1073741833)), (393216U)));
            var_18 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) arr_9 [(_Bool)1] [(_Bool)1]))), ((~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_5)))))))));
            arr_19 [(unsigned char)3] [i_2 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-5))))) > (((((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))))) * (((/* implicit */unsigned long long int) var_0))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 3; i_7 < 9; i_7 += 4) 
                {
                    {
                        var_19 += ((/* implicit */int) ((((((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5])) ? (var_2) : (((/* implicit */unsigned int) -1073741825)))) >= ((~(var_9))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 - 1] [i_6 - 1]))) & (((var_6) / (((/* implicit */unsigned int) arr_4 [i_6] [i_7 + 2])))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) / (var_11))) >> (((1918431820) - (1918431811)))))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_17 [i_2] [i_2] [i_2]))));
                        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 1073741824)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned char)109))))))) : ((-(arr_17 [i_7] [0U] [i_5])))));
                    }
                } 
            } 
        }
        var_22 += ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_2 - 3] [i_2 - 2] [i_2 - 3] [i_2] [i_2 - 3] [i_2]))))) - (132U)))))) ? (max((((/* implicit */unsigned int) arr_3 [0U] [i_2 + 1])), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (~(var_9)))))));
        /* LoopSeq 3 */
        for (int i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_1) ? (arr_17 [i_2] [i_8] [i_8]) : (((/* implicit */unsigned long long int) arr_18 [i_2] [(signed char)4] [(signed char)4])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))) ? (((unsigned long long int) arr_15 [i_2 - 1] [i_2] [i_2])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))) * ((~(var_8)))))));
            var_24 *= ((((/* implicit */unsigned int) ((((((/* implicit */unsigned int) arr_4 [2] [i_8])) >= (353969012U))) ? (((/* implicit */int) ((_Bool) (unsigned char)173))) : (-1073741825)))) < (((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8]))) > (var_7))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((1294089498U) - (1294089472U)))))) : (((((/* implicit */_Bool) 1073741820)) ? (var_6) : (arr_27 [i_2] [i_2]))))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 4; i_9 < 10; i_9 += 4) 
        {
            var_25 = ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_30 [i_2])) : (((/* implicit */int) arr_20 [i_2]))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_25 [i_2] [i_2])))));
            /* LoopNest 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    {
                        arr_37 [i_2] = ((/* implicit */unsigned char) ((_Bool) var_2));
                        var_26 -= ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_10))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_13 = 2; i_13 < 10; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_47 [i_2] = ((/* implicit */unsigned int) ((((((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) (unsigned char)73)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_29 [i_12])) : (((/* implicit */int) (short)-1)))) - (23875)))));
                        arr_48 [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_4)))));
                    }
                } 
            } 
            arr_49 [i_2] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_4 [i_2] [i_12])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
        }
        arr_50 [(unsigned char)2] |= ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_2 + 1]))))) ^ (((((/* implicit */_Bool) min((var_0), (((/* implicit */int) arr_22 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))))) ? ((~(var_5))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_2])) >> (((((/* implicit */int) arr_14 [i_2] [6] [i_2])) - (104)))))))));
        arr_51 [i_2] = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    }
}
