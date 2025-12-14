/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87698
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) arr_11 [i_0]);
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : ((~(((((/* implicit */int) arr_1 [i_3] [i_1])) / (((/* implicit */int) var_8))))))));
                                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                                var_15 |= ((/* implicit */unsigned short) min((((((((/* implicit */int) (unsigned short)23294)) & (((/* implicit */int) (unsigned char)244)))) << (((10992066940743803585ULL) - (10992066940743803563ULL))))), (((((/* implicit */int) (unsigned char)29)) ^ (((/* implicit */int) (unsigned short)24576))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19601)) ? (((/* implicit */int) (unsigned short)19521)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_13 [(unsigned char)12] [(unsigned char)12] [i_2 - 1] = ((/* implicit */_Bool) (unsigned short)65534);
                    arr_14 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19617)) ? (((/* implicit */int) (unsigned short)27074)) : (((/* implicit */int) arr_2 [i_0] [(unsigned char)0] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) : ((-(arr_8 [i_0] [i_1] [(_Bool)1] [i_1] [(_Bool)1])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19630))) | (arr_9 [i_1] [i_1] [i_1] [i_2 - 1] [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(unsigned short)21] [(unsigned short)21] [(unsigned char)11] [(unsigned char)11] [(unsigned short)21])) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]))))) & (((/* implicit */int) max((var_0), ((unsigned char)255)))))))));
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) var_1)), ((((((-(((/* implicit */int) var_4)))) + (2147483647))) << (((16295717936753675362ULL) - (16295717936753675362ULL)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) 8589934591ULL);
    var_19 = ((/* implicit */unsigned short) (-(4294967295U)));
}
