/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65620
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) var_3))));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_2))))))) || (((_Bool) (+(((/* implicit */int) var_9))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) < (((/* implicit */int) arr_0 [i_0 - 2]))))) < (((/* implicit */int) var_1))));
        var_15 = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) 4323455642275676160ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [7ULL]))) : (4323455642275676160ULL))), (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)32755))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 + 3])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                                var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_12 [i_0] [i_0] [(signed char)11] [i_4 - 1])))));
                                arr_16 [i_3] [(signed char)6] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_0 [i_0 + 3]))) == (((((/* implicit */int) min((((/* implicit */short) (signed char)123)), (arr_3 [i_4])))) * (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                    var_18 ^= max((((unsigned long long int) 1875549274754941521ULL)), (((/* implicit */unsigned long long int) ((long long int) arr_15 [i_2 - 1] [i_0] [i_0 - 1] [i_0] [(signed char)2]))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28095)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [i_0]))))))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56033))))) : (((/* implicit */int) ((signed char) ((short) (unsigned short)56033))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 4; i_5 < 19; i_5 += 3) 
        {
            for (short i_6 = 1; i_6 < 19; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) var_0);
                    var_22 = ((signed char) arr_18 [(unsigned short)11] [(unsigned short)11]);
                    arr_24 [i_5] = ((/* implicit */long long int) (~(((max((((/* implicit */unsigned long long int) arr_22 [i_5])), (var_8))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_0])))))))));
                    arr_25 [i_5] = ((/* implicit */unsigned long long int) ((signed char) var_6));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_23 = ((/* implicit */short) ((signed char) (signed char)-118));
        arr_28 [i_7] [i_7] = ((/* implicit */_Bool) ((arr_20 [i_7] [i_7] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)32755)))));
        var_24 = ((/* implicit */short) ((long long int) arr_12 [(short)17] [(short)16] [i_7] [i_7]));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((long long int) -562949953421312LL)))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) | (arr_35 [i_9] [i_8] [i_7])));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
}
