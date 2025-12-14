/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71713
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
    var_17 = ((/* implicit */unsigned int) (unsigned char)124);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((max((12868954164771960661ULL), (((/* implicit */unsigned long long int) var_10)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 924766780U)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (12868954164771960661ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) min((arr_1 [10LL]), (arr_1 [i_0]))))) ? (((unsigned long long int) arr_0 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((10649150539823043484ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23875))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132)))));
                    arr_8 [i_0] [i_0] [i_1 + 1] [i_2] = ((/* implicit */signed char) (+(arr_5 [i_0] [i_0])));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (12868954164771960661ULL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            for (int i_4 = 1; i_4 < 14; i_4 += 2) 
            {
                {
                    var_22 = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)56)) >= (((/* implicit */int) var_2)))))) + (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (14397510177876852411ULL))))));
                    var_23 = ((/* implicit */unsigned char) ((_Bool) max((arr_4 [i_0]), (arr_4 [i_0]))));
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        arr_16 [i_5] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (-(arr_13 [i_5])))) ? (((arr_14 [i_5]) + (arr_14 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [i_5] [i_5]) <= (((/* implicit */unsigned long long int) var_11)))))))));
        /* LoopSeq 1 */
        for (short i_6 = 2; i_6 < 24; i_6 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) ((arr_19 [i_5] [i_5] [i_5]) + (((/* implicit */int) var_16)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)3554))) : (arr_17 [i_6 - 1] [i_6]))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    {
                        var_25 -= max((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)66)), ((+(-2104679149)))))), (min((((/* implicit */unsigned int) (signed char)66)), (((((/* implicit */_Bool) arr_23 [i_8] [i_6 - 2] [i_6 - 2] [12U] [i_5])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))))))));
                        arr_27 [i_8] [i_6] = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (short)25914)))));
                        var_26 += ((/* implicit */unsigned char) 1155658709U);
                        var_27 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_5] [i_6])) && (((/* implicit */_Bool) arr_15 [i_5] [i_5])))) ? (((/* implicit */int) ((arr_24 [i_5] [i_6 - 1] [i_7] [i_6 + 1]) <= (arr_24 [i_5] [i_5] [(unsigned char)6] [i_6 + 1])))) : (((/* implicit */int) ((signed char) arr_24 [i_5] [i_5] [i_7] [i_6 + 1])))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((-1648510559) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5] [i_6 + 1] [i_6])) ? (((/* implicit */long long int) arr_24 [i_5] [i_5] [i_5] [i_5])) : (arr_26 [i_6] [i_6] [i_6] [i_6])))) ? (((/* implicit */int) ((signed char) arr_22 [i_5] [i_6] [i_6]))) : (arr_24 [i_5] [i_5] [i_5] [i_5]))))))));
            arr_28 [i_5] [i_5] = ((/* implicit */short) max((((((/* implicit */_Bool) -1648510559)) ? (arr_19 [i_6 - 1] [i_6] [i_5]) : (arr_19 [i_6 + 1] [i_6 + 1] [i_6 + 1]))), ((~(arr_19 [i_6 - 1] [i_6] [i_6 - 2])))));
        }
        arr_29 [i_5] = ((/* implicit */short) (+(((arr_22 [i_5] [i_5] [i_5]) | (((/* implicit */unsigned long long int) arr_17 [(short)14] [i_5]))))));
        var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 560571270U)), (12868954164771960649ULL)))) ? ((~(arr_24 [i_5] [(_Bool)1] [i_5] [i_5]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) % ((((+(-1614559494))) / (((((/* implicit */_Bool) 7885933444860978662ULL)) ? (((/* implicit */int) (signed char)12)) : (arr_19 [i_5] [i_5] [i_5])))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        for (unsigned char i_10 = 3; i_10 < 23; i_10 += 3) 
        {
            {
                arr_35 [i_9] = -3276371508037495267LL;
                var_30 = ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((15423897411850022963ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10))))))) + ((+(3276371508037495267LL)))));
                arr_36 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_10])) ? (((/* implicit */int) (short)18305)) : (((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_10] [i_10]))))) ? (((unsigned long long int) (short)-22093)) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1614559464)) + (arr_18 [i_9]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_18 [i_10 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-18286), (((/* implicit */short) (signed char)-57)))))))))) : (3490856402U));
                var_31 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_17 [i_9] [i_10])))) + (((((/* implicit */_Bool) arr_17 [i_9] [i_10])) ? (arr_17 [i_10 - 3] [i_10 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (short)18286)))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) var_15);
}
