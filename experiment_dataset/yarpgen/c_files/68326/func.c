/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68326
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) min((16436066927063417791ULL), (((/* implicit */unsigned long long int) -6635276870734345788LL))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) * ((+(2010677146646133825ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((arr_1 [i_0] [3LL]) & (arr_1 [i_0] [i_0]))))))));
        var_18 = ((/* implicit */unsigned char) (+(max((min((var_14), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_11))))));
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [13]))) <= (-3063573236829806802LL)))), (2010677146646133824ULL))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [(unsigned short)4] [i_0] = ((/* implicit */signed char) -6635276870734345776LL);
                    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5257339003160666117ULL)))))) : ((+(arr_9 [i_1] [i_0])))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((signed char) var_9))), (-6635276870734345786LL)));
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        arr_15 [(unsigned short)16] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) ((short) (~(arr_13 [i_3])))))) != (arr_14 [i_3] [i_3]));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_14 [i_4 + 2] [i_4 + 3]) < (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4 + 2] [i_4 + 3])))))) >> (((((/* implicit */int) arr_18 [i_3] [7])) - (64)))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-22036)), (17557327190808697318ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((long long int) (+(arr_21 [i_3] [i_3] [i_3] [i_3]))))));
                }
            } 
        } 
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_18 [i_3] [i_3])), (-6635276870734345788LL)))), ((+(((((/* implicit */_Bool) (short)32756)) ? (2010677146646133817ULL) : (2010677146646133824ULL))))))))));
    }
    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) var_10);
        arr_24 [i_6 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16436066927063417791ULL)) ? (2010677146646133824ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120)))))))))) : (arr_14 [i_6] [i_6])));
        var_25 += ((/* implicit */unsigned char) -3788056629159024616LL);
        arr_25 [i_6] = ((/* implicit */unsigned short) (short)14189);
    }
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    for (unsigned int i_10 = 1; i_10 < 21; i_10 += 1) 
                    {
                        {
                            arr_36 [24] [24] [i_8] [i_9] [i_10] &= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) -6635276870734345788LL)) && (((/* implicit */_Bool) arr_27 [i_9])))));
                            arr_37 [i_7] [i_7] [(_Bool)1] [i_7] = max(((!(((/* implicit */_Bool) var_3)))), (var_8));
                        }
                    } 
                } 
                arr_38 [i_8] [i_7] [i_7] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))) ? (((-8293103093821762144LL) - (-6635276870734345783LL))) : (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6635276870734345775LL)))))));
                var_26 -= ((/* implicit */unsigned char) arr_17 [i_7]);
                var_27 = ((/* implicit */unsigned char) ((((arr_34 [i_7] [i_7] [i_7] [i_7] [i_8] [i_8]) ? (((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8]))) : (2010677146646133824ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 841582074)) : ((-9223372036854775807LL - 1LL)))))));
            }
        } 
    } 
}
