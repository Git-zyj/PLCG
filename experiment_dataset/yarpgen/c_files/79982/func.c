/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79982
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    var_15 -= ((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)168), (var_11))))) / (((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_10))))) * (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (short)-1))))));
                    arr_8 [i_0] [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) arr_1 [i_2 + 2]))))) <= (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)226)) && (((/* implicit */_Bool) var_1))))))));
                    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)185)), (8632386814835891681ULL)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (unsigned short)3072))))), ((~(var_8))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (arr_10 [19] [19]))))))));
        arr_12 [i_3] = ((/* implicit */short) ((unsigned short) ((unsigned short) var_3)));
        /* LoopSeq 4 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            arr_15 [i_3] [i_3] = ((/* implicit */short) ((long long int) arr_13 [i_4]));
            arr_16 [i_4] [i_3] [i_3] = ((unsigned long long int) (!(((/* implicit */_Bool) (short)-32761))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (unsigned int i_7 = 4; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) -1625763738)) != (arr_11 [i_7 + 2])));
                        arr_25 [i_6] [i_6] [i_6] [i_6] &= ((/* implicit */_Bool) ((short) 9814357258873659935ULL));
                        arr_26 [i_7 - 1] = ((/* implicit */unsigned long long int) ((unsigned short) (-(var_8))));
                    }
                } 
            } 
            var_19 ^= ((/* implicit */long long int) (unsigned char)29);
        }
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
        {
            arr_29 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_3] [i_8] [i_8]))) : (((((/* implicit */long long int) 3124940414U)) / (var_2)))));
            var_20 = ((/* implicit */unsigned char) ((short) max((arr_24 [i_3] [i_8] [i_8]), (arr_24 [i_3] [i_8] [i_8]))));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) var_11);
                arr_33 [i_8] = max((((unsigned short) 848954833608919452LL)), (((/* implicit */unsigned short) ((signed char) ((var_14) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))))))));
                var_22 = ((/* implicit */unsigned long long int) 262016U);
            }
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16383)) ? (2117542921) : (((/* implicit */int) (unsigned char)252))));
            arr_34 [i_3] [i_3] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (arr_20 [(unsigned short)4] [i_3] [i_8] [i_8])));
        }
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) max((max(((~(((/* implicit */int) arr_21 [i_3] [i_3] [i_10] [i_10])))), (((/* implicit */int) min(((unsigned short)62983), (((/* implicit */unsigned short) (_Bool)1))))))), (((/* implicit */int) ((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) (unsigned short)1)))) && (((/* implicit */_Bool) min((420050477U), (((/* implicit */unsigned int) (unsigned char)6))))))))));
            var_25 = var_11;
        }
    }
}
