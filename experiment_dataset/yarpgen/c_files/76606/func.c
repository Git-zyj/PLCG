/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76606
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
    var_20 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))), ((+(var_12))))), (((((/* implicit */unsigned long long int) min((-100656289516973368LL), (((/* implicit */long long int) (unsigned char)255))))) - (max((((/* implicit */unsigned long long int) var_5)), (var_15)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))) != (((/* implicit */int) arr_0 [i_0] [i_0]))));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) arr_0 [i_1 - 1] [i_1 - 1]));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((int) var_11));
            arr_8 [12ULL] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */long long int) var_0)) : (100656289516973363LL)));
        }
        arr_9 [i_0] = ((/* implicit */unsigned int) arr_1 [(_Bool)1]);
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
    {
        arr_13 [i_2] [i_2] = ((/* implicit */int) (~(100656289516973368LL)));
        arr_14 [(signed char)17] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_1 [i_2])), (min((((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (arr_2 [(_Bool)1] [(_Bool)1])))), ((~(arr_12 [i_2])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    arr_21 [i_2] [i_3] = ((/* implicit */signed char) ((arr_10 [i_3]) >= (((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2])) ? ((~(var_3))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))))));
                    arr_22 [i_2] [i_2] = ((int) min((((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1))), (5895920948181996629ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_29 [i_2] [i_2] [i_2] [i_5] [10] [i_6] = ((/* implicit */unsigned int) ((((unsigned long long int) ((arr_23 [12] [i_3] [12] [12]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) <= (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_4] [9ULL])) * (((/* implicit */int) arr_20 [i_2] [i_3] [i_3])))) * (((/* implicit */int) var_1)))))));
                                arr_30 [i_6] [i_6] [13LL] [i_6] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 11583116273582561871ULL)) ? (12550823125527554986ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) 11212800385197289614ULL)))) || ((_Bool)1)));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            arr_33 [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)0))));
            arr_34 [(signed char)4] = max((max((max((((/* implicit */unsigned long long int) var_19)), (5895920948181996629ULL))), (((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9905783136007288703ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_2] [i_7] [i_2]))))));
            arr_35 [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (var_0) : (((/* implicit */unsigned int) var_19)))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [11] [i_7])))));
        }
    }
}
