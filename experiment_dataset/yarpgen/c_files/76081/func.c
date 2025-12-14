/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76081
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
    var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-122)) == (((/* implicit */int) var_7))))) : ((-(((/* implicit */int) var_10)))))), (((/* implicit */int) var_3))));
    var_16 ^= ((/* implicit */short) ((unsigned char) max((min((((/* implicit */unsigned long long int) 3026105606U)), (var_0))), (((/* implicit */unsigned long long int) var_9)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_18 = ((/* implicit */int) 2475595532U);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_0))));
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) (short)(-32767 - 1)))) + (arr_0 [i_1 - 1])));
            var_21 = ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-28464))))) : (arr_3 [i_0] [i_1 + 3] [i_1]));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                var_22 = ((/* implicit */unsigned int) arr_2 [i_0] [i_2]);
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (1268861689U))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */int) (short)-1674)) / (624522718))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (short)2808)) - (((/* implicit */int) (unsigned char)156))));
                            arr_15 [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */int) var_3);
                        }
                    } 
                } 
                var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [(short)5] [i_2] [i_2]))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) (~(var_0)));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_6)) : (((((/* implicit */_Bool) var_4)) ? (1268861699U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                            var_29 = ((/* implicit */short) var_11);
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_6))));
                        }
                    } 
                } 
            }
            arr_20 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 1268861699U)) ? (((/* implicit */long long int) 3026105619U)) : (var_13)));
            arr_21 [i_0] |= ((/* implicit */long long int) (+(arr_8 [i_0])));
        }
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            arr_26 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_3))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 3; i_9 < 10; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 4; i_10 < 11; i_10 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) ((9695107375118048498ULL) >> (((var_0) - (12741486326388693215ULL)))));
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_8]))));
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned int) arr_3 [i_0] [i_8] [i_9]);
                            var_34 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                        }
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_8] [(signed char)7] [1])))))));
        }
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) var_4))))))));
    }
    var_37 = ((/* implicit */unsigned int) min((10657397741432414140ULL), (((/* implicit */unsigned long long int) var_10))));
}
