/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9183
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) 501842021);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0] [i_0 - 2] [8ULL] = ((/* implicit */long long int) ((arr_0 [i_1]) >= (arr_0 [i_1])));
            var_17 += ((/* implicit */unsigned short) ((((10789454078830341849ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [(unsigned char)7] [i_1]))))));
        }
        var_18 = ((/* implicit */short) ((unsigned short) (_Bool)1));
    }
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 22; i_4 += 1) 
            {
                {
                    arr_14 [i_4] [15LL] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((signed char) (_Bool)1)))))) * ((+(arr_13 [(_Bool)1] [i_4 - 1])))));
                    var_19 -= ((/* implicit */int) (_Bool)1);
                    var_20 = ((/* implicit */unsigned short) (_Bool)1);
                    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (_Bool)1);
    var_23 = ((((((((/* implicit */int) var_13)) | (((/* implicit */int) (unsigned short)3089)))) | (((((/* implicit */int) (signed char)83)) ^ (((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) var_8)));
    var_24 = ((/* implicit */long long int) var_9);
}
