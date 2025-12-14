/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62833
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_14 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_1] [i_2] [i_1] [i_0]))))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_3 [i_0] [i_1])))) : (((((/* implicit */int) arr_2 [i_3])) & (((/* implicit */int) arr_4 [i_1]))))))) ? (((/* implicit */int) (_Bool)1)) : ((~((+(((/* implicit */int) arr_13 [i_3] [i_2] [i_1] [i_0]))))))));
                            arr_15 [i_2] [i_2] [i_2] [i_0] |= ((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_2])), (min((min((((/* implicit */unsigned char) (_Bool)1)), (var_17))), (max((((/* implicit */unsigned char) (_Bool)1)), (var_10)))))));
                            arr_16 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (+((-(((((/* implicit */int) arr_3 [i_2] [i_2])) * (((/* implicit */int) (_Bool)1))))))));
                            var_20 = ((/* implicit */short) (_Bool)1);
                            arr_17 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)43956), ((unsigned short)32782)))) ? (((/* implicit */int) max(((unsigned short)21590), ((unsigned short)43949)))) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (min((((/* implicit */int) ((_Bool) (_Bool)1))), (min((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_3])), (-79707390))))) : (((/* implicit */int) min(((unsigned short)32754), (((/* implicit */unsigned short) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_21 ^= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            var_22 |= ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_4]))))) || (((/* implicit */_Bool) var_2)))) ? ((~(((/* implicit */int) (unsigned short)33118)))) : (((/* implicit */int) var_18))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [17])) / (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_4] [i_4])))) * (((/* implicit */int) arr_2 [i_4])))) | (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_5])) : (((arr_10 [i_5] [i_5] [(unsigned short)3] [i_5]) ? (((/* implicit */int) var_14)) : (1888567871))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            {
                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_22 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */long long int) (unsigned short)32773))))) ? (((/* implicit */int) max((var_9), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) ((signed char) arr_11 [i_7] [i_7] [i_7] [i_7] [i_6])))))) ? (max((((/* implicit */unsigned long long int) arr_7 [i_7])), (max((((/* implicit */unsigned long long int) (unsigned short)62876)), (134217727ULL))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_4 [i_7])) + (((/* implicit */int) arr_6 [i_7] [i_6]))))))));
                var_25 = (unsigned short)21580;
                arr_28 [i_6] [i_6] &= ((/* implicit */unsigned short) var_6);
                var_26 += ((/* implicit */unsigned short) min((((arr_22 [i_6] [i_7] [i_7] [i_7]) / (((/* implicit */long long int) ((/* implicit */int) ((short) var_13)))))), (((/* implicit */long long int) max((((arr_20 [i_6] [i_7] [i_6] [i_6] [i_6]) ? (((/* implicit */int) arr_7 [i_7])) : (((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) var_5)))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */int) var_1);
    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_4))));
}
