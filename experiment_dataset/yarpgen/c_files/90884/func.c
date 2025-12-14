/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90884
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
    var_14 = ((/* implicit */int) var_5);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_1)) == ((+(((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 += ((/* implicit */unsigned short) (((~(arr_4 [i_1] [i_0]))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) arr_2 [i_1]))))) ? (((int) var_12)) : (((((/* implicit */int) var_4)) >> (((/* implicit */int) var_8)))))))));
                var_17 += ((/* implicit */signed char) var_4);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */short) ((signed char) (unsigned char)2))), (min(((short)-14416), (((/* implicit */short) arr_8 [i_2] [i_1] [i_2]))))))), (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [11U] [11U] [i_1] [i_1] [i_2] [i_3 + 1])))), (min((((/* implicit */int) (_Bool)1)), (var_2)))))));
                            arr_11 [i_2] [i_1] [(signed char)3] [i_1 + 2] [i_1] [i_1 - 2] = ((/* implicit */short) (~(4294967284U)));
                        }
                    } 
                } 
                var_19 = ((11U) - (4294967282U));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((_Bool) (~(-1761789417))));
    /* LoopSeq 1 */
    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            for (unsigned int i_6 = 3; i_6 < 16; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-98)))), (((/* implicit */int) var_8)))))));
                    var_22 = ((/* implicit */unsigned char) 20U);
                }
            } 
        } 
        var_23 |= ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)21161)) | ((~(((/* implicit */int) var_7)))))), (max((((((/* implicit */int) (signed char)69)) >> (((((/* implicit */int) arr_18 [(unsigned char)6])) - (32))))), (((/* implicit */int) ((signed char) -1761789417)))))));
        var_24 = ((((((/* implicit */_Bool) arr_18 [(_Bool)0])) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((arr_15 [(_Bool)1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0))))))) == (((/* implicit */unsigned int) var_2)));
    }
}
