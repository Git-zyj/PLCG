/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68484
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min(((-(arr_0 [i_0]))), (min((min((17413380675368869504ULL), (((/* implicit */unsigned long long int) (short)32283)))), (min((16776960ULL), (12927623731335943429ULL))))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_2 [i_1] [10ULL] [(signed char)14]) ? (16776936ULL) : (672007924808723857ULL))) ^ (min((var_0), (((/* implicit */unsigned long long int) arr_11 [18U] [13U] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((arr_9 [i_3] [14LL] [i_2] [i_4 - 1] [5LL] [5ULL]) ? (((/* implicit */int) arr_9 [(unsigned short)0] [i_1] [16U] [i_4 - 1] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_9 [i_0] [18ULL] [i_2] [i_4 - 1] [i_4] [i_4]))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (arr_0 [i_0])))))));
                            var_17 -= ((/* implicit */unsigned char) arr_6 [i_0] [18LL] [i_2] [12]);
                        }
                        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_11)), (17774736148900827760ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_3] [i_2] [13] [(short)20] [i_1] [19]), (var_8))))))))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_9 [i_0] [(signed char)5] [i_1] [10ULL] [i_2] [10U]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1445180836027080294LL)), (arr_0 [i_2]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 20; i_5 += 2) /* same iter space */
    {
        var_20 = ((((/* implicit */_Bool) arr_13 [i_5 + 3])) ? (5519120342373608202ULL) : (arr_12 [i_5] [i_5]));
        var_21 = ((((/* implicit */_Bool) arr_14 [i_5 - 2])) ? (((/* implicit */unsigned long long int) (-(var_6)))) : ((~(18446744073692774649ULL))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 20; i_6 += 2) /* same iter space */
    {
        arr_17 [18] = ((/* implicit */short) arr_16 [i_6]);
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_24 [i_6] [8ULL] [i_9] [8LL] = ((/* implicit */_Bool) ((unsigned char) arr_15 [i_6 - 2]));
                        var_22 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_14))))));
                    }
                    arr_25 [1] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-28933)) ^ (((/* implicit */int) (short)-19320))))) : (3067016905U)));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-119)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
}
