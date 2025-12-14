/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86862
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
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_1 [12U]), (((/* implicit */short) ((unsigned char) arr_0 [i_0]))))))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-45)))))) ? (((2141968821U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3])))))) * (((((/* implicit */_Bool) var_9)) ? (((long long int) 2139095040U)) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_13 -= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0])) ? (2620187658U) : (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-20))))) : ((+(((/* implicit */int) var_8)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */int) ((arr_2 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)77)) || (((/* implicit */_Bool) arr_2 [i_0]))))))));
                            var_15 = ((/* implicit */int) 10154480886493434554ULL);
                            arr_14 [i_0] [i_1] [i_1] [(unsigned char)15] [i_0] = ((/* implicit */int) ((((min((((/* implicit */unsigned long long int) arr_9 [i_0 - 2] [i_1] [i_2])), (arr_13 [i_0] [i_0] [i_0]))) < (((10012354259347614653ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [(_Bool)1] [i_3] [(signed char)8]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2253124800052345985LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (29U))))));
                            var_16 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4096))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) - (11090292634833433413ULL))))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                        }
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            var_17 += ((/* implicit */signed char) (~((~(min((2152998503U), (((/* implicit */unsigned int) arr_1 [i_3]))))))));
                            var_18 = ((/* implicit */short) var_7);
                        }
                        arr_17 [i_0] [i_1 - 2] [i_0] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((arr_16 [i_0] [(signed char)8] [(unsigned short)15] [i_0] [(signed char)8] [i_0]) - (2152998475U))), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2])))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_0 + 2] [1U]))))) - (((/* implicit */int) arr_0 [i_0])))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_7 = 4; i_7 < 21; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_20 = ((/* implicit */signed char) arr_23 [(signed char)0]);
                /* LoopNest 2 */
                for (signed char i_9 = 4; i_9 < 22; i_9 += 4) 
                {
                    for (unsigned int i_10 = 3; i_10 < 19; i_10 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_25 [i_8]), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((-(arr_25 [i_6])))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6] [i_6] [i_8] [i_6] [i_6])) ? (min((arr_25 [i_7 - 3]), (arr_25 [i_7 - 4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            var_23 = ((/* implicit */unsigned int) ((((_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) arr_21 [i_6]))) : (((((/* implicit */_Bool) (+(-886442596)))) ? (((/* implicit */int) min((var_9), (arr_24 [i_6] [i_6] [i_6] [i_8])))) : (((/* implicit */int) arr_27 [i_10 + 3] [i_10 + 1] [i_10 - 2]))))));
                        }
                    } 
                } 
            }
            for (signed char i_11 = 1; i_11 < 20; i_11 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_12 = 2; i_12 < 21; i_12 += 3) 
                {
                    arr_36 [i_6] [i_12] [i_6] [i_12 + 2] = ((/* implicit */unsigned char) var_2);
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_6])) ? (2152998474U) : (((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
                arr_37 [i_6] [12LL] [12LL] [11U] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - ((-(((-2253124800052345985LL) & (((/* implicit */long long int) 2049122009U))))))));
                arr_38 [i_6] [i_6] [i_11] [i_6] = ((/* implicit */_Bool) ((min((var_6), (((/* implicit */unsigned int) var_8)))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))));
            }
            var_25 = ((/* implicit */unsigned int) var_10);
        }
        for (short i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            var_26 = ((/* implicit */short) min((366521048U), (((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6] [i_6] [(_Bool)1] [i_13] [i_13])))))));
            var_27 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (arr_23 [i_6]));
            arr_42 [i_6] [i_6] [i_13] = arr_18 [i_6] [i_6];
        }
        arr_43 [i_6] = ((/* implicit */unsigned short) min(((short)-31528), (((/* implicit */short) (_Bool)1))));
        var_28 &= ((/* implicit */_Bool) ((unsigned short) 2175526106U));
    }
    var_29 = ((((/* implicit */long long int) (~(((/* implicit */int) var_1))))) & (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)23)) ^ (((/* implicit */int) var_1))))), (min((var_2), (((/* implicit */long long int) var_0)))))));
}
