/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66444
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
    var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(8184U)))) ? (min((((/* implicit */unsigned long long int) var_7)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3)))))))) * (((/* implicit */unsigned long long int) max((((-1085478150) / (((/* implicit */int) var_1)))), (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
    var_11 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40049))) & (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (min((max((var_7), (((/* implicit */unsigned int) (unsigned short)49892)))), (((/* implicit */unsigned int) min((var_5), ((unsigned short)5397))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) 558446353793941504ULL);
                var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0])))))))), (arr_3 [i_1 - 1] [i_1 - 1] [i_1])));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_4 [i_0] [i_0] [i_0]) & ((~(((/* implicit */int) arr_1 [i_2] [(signed char)6]))))));
                    arr_8 [i_2] [i_0] = (unsigned short)29622;
                }
                for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [3LL] [3LL]);
                    arr_12 [i_0] = ((/* implicit */short) (unsigned short)29637);
                    var_14 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)130))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [(unsigned short)0] [i_1] [i_3]))))), (((((/* implicit */unsigned long long int) var_2)) - (17888297719915610101ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) 
                    {
                        for (signed char i_5 = 1; i_5 < 8; i_5 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((arr_10 [(short)3] [i_4] [i_4]) <= ((+(((/* implicit */int) (unsigned short)14869))))));
                                arr_19 [i_0] [i_1] [i_3] [i_0] [i_5] = ((/* implicit */unsigned char) 15121716257645356379ULL);
                            }
                        } 
                    } 
                }
                arr_20 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_5))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)3863), (((/* implicit */short) var_9)))))) : (max((var_3), (17888297719915610098ULL)))))));
    var_17 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)50667)) <= (((/* implicit */int) (unsigned short)50667))));
}
