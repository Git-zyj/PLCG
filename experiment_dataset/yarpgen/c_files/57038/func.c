/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57038
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2774041738U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (unsigned char)125)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (max((((/* implicit */unsigned int) var_13)), (arr_2 [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)21])))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (-(305731401U)));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (((!((_Bool)1))) && (((/* implicit */_Bool) (-(arr_5 [i_0] [i_1]))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) max((3989235894U), (((/* implicit */unsigned int) (short)-32750))))), (((((/* implicit */_Bool) (unsigned char)7)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) >= (((/* implicit */unsigned long long int) min((305731393U), (((/* implicit */unsigned int) (_Bool)1)))))));
                        var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_15), (((/* implicit */short) (_Bool)1))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)4176)))) >> (((arr_1 [(_Bool)1]) - (6181815958712114319ULL))))) : (((/* implicit */int) max((((signed char) (signed char)-25)), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)23142))) >= (arr_2 [3U])))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (short)-23165))) | (((/* implicit */int) var_13))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_5))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 4; i_5 < 22; i_5 += 4) 
                        {
                            arr_19 [i_1] [(short)22] [i_1] [i_1] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1520925556U)) ? (((/* implicit */unsigned long long int) 1024U)) : (11ULL)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (((_Bool)1) || ((_Bool)1))))));
                            arr_20 [i_0] [i_1] [i_2] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned long long int) (((_Bool)1) && ((_Bool)1)));
                            arr_21 [i_1] [i_0] [i_3] [(_Bool)1] = ((/* implicit */short) (!((_Bool)1)));
                        }
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_0] [i_0]))));
            var_22 = ((/* implicit */_Bool) var_16);
        }
        for (unsigned int i_6 = 3; i_6 < 22; i_6 += 3) 
        {
            var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (((unsigned char) (~(((/* implicit */int) var_11)))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                for (unsigned char i_8 = 2; i_8 < 21; i_8 += 4) 
                {
                    {
                        arr_30 [i_0] [i_6 - 1] [i_7] [i_8 + 1] = ((/* implicit */short) ((unsigned long long int) var_2));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (max(((((~(arr_1 [i_8 - 1]))) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */unsigned long long int) 2628579204U))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_9 = 2; i_9 < 22; i_9 += 4) 
            {
                var_25 = ((/* implicit */signed char) (!((_Bool)1)));
                var_26 ^= ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_3))))));
                arr_34 [i_0] [(signed char)18] [i_9 + 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))) : (var_1))))), (((unsigned int) (_Bool)1))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_10 = 2; i_10 < 22; i_10 += 4) 
                {
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-81))));
                    arr_38 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_0 [i_6 - 1]));
                }
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) (short)3027)) ? (((/* implicit */int) (short)-19)) : (((/* implicit */int) (short)-3026)))))));
                            arr_47 [i_0] [i_0] = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) (signed char)-123)) || (((/* implicit */_Bool) 3989235900U)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14))));
                            arr_48 [i_11] [i_11] [i_11] [18ULL] [i_11] [i_0] [i_11] = ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) 305731372U))));
                            arr_49 [i_0] [i_0] [i_0] [i_12] [i_0] |= ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
                arr_50 [i_6] [i_0] = ((/* implicit */short) min((3729288077U), (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14)))))))));
            }
            arr_51 [(unsigned char)20] &= ((/* implicit */unsigned long long int) ((((3729288077U) <= (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14))) : (((((/* implicit */_Bool) (signed char)0)) ? (1601357621U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        }
    }
    var_29 = ((/* implicit */signed char) var_6);
}
