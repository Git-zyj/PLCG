/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90228
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
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) min((min((((/* implicit */long long int) (_Bool)1)), (var_7))), (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned short)65535))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) : (var_4))), (((/* implicit */long long int) (unsigned short)65530)))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                            var_19 *= ((/* implicit */signed char) max((min((((/* implicit */unsigned int) arr_0 [i_1 - 1] [i_1 + 1])), (((((/* implicit */_Bool) (short)8142)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967292U))))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (unsigned char)189)) % (((/* implicit */int) var_8))))))));
                            arr_11 [(short)4] [i_1] = ((/* implicit */unsigned int) max((min((max((((/* implicit */int) var_3)), (-1886048133))), (((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)216)))))), (((/* implicit */int) (((-(((/* implicit */int) var_12)))) < (((/* implicit */int) var_6)))))));
                            arr_12 [i_1] [(signed char)0] [i_1] = ((/* implicit */short) arr_7 [i_1 - 4] [i_1] [i_1] [i_1 + 1]);
                            arr_13 [i_3] [i_0] [i_0] [(unsigned short)4] |= (((~(((9223372036854775807LL) ^ (((/* implicit */long long int) -2105549145)))))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))));
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) >= (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (78151160205250207LL))))))) == (((((/* implicit */_Bool) (signed char)32)) ? (((unsigned int) var_11)) : (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (arr_2 [i_1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))) : (max((((/* implicit */unsigned int) arr_7 [i_5] [i_6] [i_5] [i_5])), (var_11)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max(((~(max((((/* implicit */long long int) arr_23 [i_4] [i_6] [i_6] [i_8])), (var_7))))), (((/* implicit */long long int) 2731548017U))));
                                var_22 = max((((/* implicit */long long int) 1563419287U)), (var_15));
                            }
                        } 
                    } 
                    arr_28 [i_4] [i_6] [i_6 + 2] [i_6] = ((/* implicit */long long int) max((((((/* implicit */int) max((arr_18 [i_6] [i_5] [i_4]), (var_3)))) * (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */int) min(((unsigned char)33), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) != (((/* implicit */int) max((var_6), (((/* implicit */short) var_1))))))))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) : (64U)))))) ? (((/* implicit */int) max((arr_18 [i_6 + 2] [i_6 - 1] [i_9 - 1]), (arr_18 [i_6 + 2] [i_9 + 1] [i_9 - 1])))) : (((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) (unsigned short)36068)))) : (((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) var_1))))))));
                                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)6)) % (var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
