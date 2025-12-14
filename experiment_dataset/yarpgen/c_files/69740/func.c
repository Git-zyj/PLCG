/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69740
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (min((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_7))))))), ((+(1043805528U)))))));
    var_15 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (var_5)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) (((~(((((/* implicit */unsigned int) 835570867)) % (4294967295U))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        var_17 = (-((~((+(((/* implicit */int) var_7)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            arr_14 [i_0 + 2] [i_0] [i_2] [11ULL] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_11)), (var_1))) == (((((/* implicit */unsigned long long int) var_3)) | (var_1))))))));
                            var_18 ^= ((/* implicit */unsigned long long int) var_9);
                        }
                        var_19 = ((/* implicit */unsigned short) var_4);
                    }
                    for (int i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((5648396310196096001ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) == ((-(((/* implicit */int) (unsigned char)196))))));
                        var_21 = ((((/* implicit */int) max((var_8), (var_7)))) == (((/* implicit */int) ((((/* implicit */int) (short)-17635)) == (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)118)), ((unsigned char)144))))))));
                        var_22 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_3)), (var_0))), (((/* implicit */long long int) max((((/* implicit */int) ((var_5) < (((/* implicit */long long int) var_3))))), ((~(((/* implicit */int) (_Bool)1)))))))));
                    }
                }
            } 
        } 
    } 
}
