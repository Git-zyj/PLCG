/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72887
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
    var_16 = ((/* implicit */_Bool) 15218267585276390981ULL);
    var_17 = min((((/* implicit */unsigned int) (unsigned short)55606)), (var_2));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 3; i_1 < 12; i_1 += 4) /* same iter space */
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 1205579885U))) & (((/* implicit */int) (signed char)11))));
            var_18 = ((/* implicit */unsigned long long int) (+(arr_2 [i_1 - 2] [i_1] [i_1 - 1])));
            arr_5 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)0));
        }
        for (signed char i_2 = 3; i_2 < 12; i_2 += 4) /* same iter space */
        {
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) ((signed char) min((((unsigned int) (unsigned short)9930)), (((/* implicit */unsigned int) (signed char)0)))));
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) arr_0 [i_2]));
        }
        var_19 = ((/* implicit */unsigned long long int) -4177203);
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)68)), (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned char)255))) : (((((/* implicit */unsigned long long int) arr_2 [i_0] [i_3] [i_0])) / (arr_1 [i_0])))))));
            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((-1733693083943051586LL) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_3] [i_0])))))) / (((unsigned long long int) 18446744073709551615ULL)))) * (((/* implicit */unsigned long long int) (-(min((6586165039880171216LL), (((/* implicit */long long int) 18U)))))))));
            arr_13 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) 930032277U)), (6586165039880171207LL)));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1612797780)) | ((~(3364935019U)))));
                            arr_22 [i_0] [i_0] [i_3] [i_0] [i_3] [i_6] = ((/* implicit */long long int) ((signed char) ((unsigned short) arr_10 [i_0] [i_0] [i_0])));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) ((short) (~(4294967274U))))) % (min((2054880137), (((/* implicit */int) arr_17 [i_6 - 2] [(_Bool)1])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 10; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        {
                            var_23 |= ((/* implicit */signed char) arr_15 [i_4] [i_7 - 1]);
                            arr_31 [i_0] [i_0] [i_4] [i_7] [i_0] = ((/* implicit */unsigned int) min((3086447489794103920ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_8 + 1] [i_0] [i_8 + 1] [i_7 + 2])) ? (1673411870U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)86)))))))));
                            arr_32 [2ULL] [i_0] [i_4] [i_7] [i_8] = ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) | (arr_19 [i_0] [i_3] [i_4] [i_0] [i_3])))))) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10777))) : (1023ULL)))) ? (((((/* implicit */int) arr_18 [i_0] [i_0] [(signed char)2] [i_0] [i_0])) >> (((((/* implicit */int) (signed char)111)) - (91))))) : (((/* implicit */int) ((unsigned char) arr_3 [i_3] [i_3] [i_3]))))));
                            var_24 ^= ((/* implicit */unsigned int) 2199023255551ULL);
                            arr_33 [i_0] [i_4] = ((/* implicit */int) ((_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_17 [i_8] [i_0]))))));
                        }
                    } 
                } 
            }
        }
    }
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-735094081)))) ? (min((((14ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (min((11802186433674769658ULL), (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) var_7))) & (var_9))))));
}
