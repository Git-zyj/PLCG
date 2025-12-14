/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75821
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) var_8);
            var_17 &= ((/* implicit */unsigned short) var_1);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_0] = ((/* implicit */signed char) (unsigned char)4);
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_0 + 1]))) / (3841113192U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)112)) > (((/* implicit */int) arr_3 [i_2])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1])))))))) : (2305843009212645376LL)));
            var_18 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned short)52309)), (1040187392U))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            arr_14 [i_0] = (signed char)77;
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */int) ((signed char) (_Bool)0))) : (536870912)));
            /* LoopSeq 1 */
            for (short i_4 = 2; i_4 < 18; i_4 += 1) 
            {
                var_20 *= (-(((/* implicit */int) arr_2 [i_3 + 2])));
                var_21 = ((/* implicit */_Bool) (+(var_5)));
            }
            arr_17 [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
        }
        for (short i_5 = 2; i_5 < 16; i_5 += 4) 
        {
            var_22 -= (((~(((/* implicit */int) arr_12 [i_0 + 3])))) | ((~(((/* implicit */int) arr_12 [i_0 + 3])))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                var_23 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) 536870912)))) != (((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_5 + 3])) ? (arr_8 [i_0 + 1]) : (((/* implicit */long long int) 1040187413U))))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (unsigned int i_8 = 2; i_8 < 18; i_8 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */long long int) arr_4 [(signed char)6]);
                            var_25 ^= ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) var_6)))));
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                arr_31 [i_0] = ((/* implicit */signed char) (+(min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_4))), (((/* implicit */long long int) (_Bool)1))))));
                var_26 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_30 [i_9] [i_9 + 1] [i_9 + 1] [i_9]))))));
                var_27 |= (((!(((/* implicit */_Bool) (~(2114182640503462333ULL)))))) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) arr_4 [i_9 + 1])))));
            }
            var_28 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / ((-(-536870921)))));
            arr_32 [i_0] = ((/* implicit */signed char) arr_30 [i_5] [i_5 - 2] [i_5 - 1] [i_5 + 4]);
            arr_33 [i_0] [i_5 - 1] [i_0] = ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)27683))))) + ((+(arr_25 [i_0] [i_5 + 3] [(_Bool)1] [i_5 + 4]))));
        }
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((3680803771U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39)))))), (((((/* implicit */_Bool) arr_28 [i_0])) ? (843697308342416500LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0]))))))))));
        var_30 = ((/* implicit */signed char) var_3);
    }
    var_31 = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
    var_32 &= ((/* implicit */int) max((max(((((_Bool)1) ? (2346770665U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))))), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (unsigned short)43146))) ^ (((/* implicit */int) var_14)))))));
    var_33 = ((long long int) min((((/* implicit */int) var_13)), (var_8)));
    var_34 -= ((/* implicit */short) (~(1759502566U)));
}
