/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87371
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
    var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((var_10) > (var_10))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) var_9)))))), ((+((~(6402994095802897795ULL)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((_Bool) max((((signed char) var_6)), (((/* implicit */signed char) ((6402994095802897795ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        arr_2 [i_0] [i_0] = max((((min((var_2), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) arr_0 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_1 [i_1] [i_1]), (var_9)))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29734))) : (13845419918379069641ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) << (((var_9) + (250929601))))))));
            var_15 = (!(((/* implicit */_Bool) var_5)));
            var_16 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_1 [i_1] [i_1]) | (((/* implicit */int) (unsigned char)24))))), (((unsigned int) arr_1 [i_2] [i_1]))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
                            arr_16 [i_1] [i_1] [i_3] [i_4] [i_1] [i_4] = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_6 [i_1] [i_2] [i_2])))), (((((/* implicit */_Bool) arr_6 [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_6 [i_2] [(unsigned char)16] [i_5])) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_3]))))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((unsigned int) ((unsigned long long int) (~(((/* implicit */int) var_4))))))));
                            arr_17 [i_4] [i_2] [i_2] [i_3] [(unsigned char)6] [i_5] = arr_0 [i_4];
                        }
                    } 
                } 
            } 
        }
        var_19 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_7)))));
        arr_18 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((12043749977906653821ULL) >> (((((/* implicit */int) var_8)) - (15545))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((0U) <= (((/* implicit */unsigned int) 852870323))))), (8724559757610170054ULL))))));
        arr_19 [i_1] = ((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46)))))) && (((((/* implicit */int) arr_13 [i_1] [i_1] [16U])) > (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) < (var_3))))) & (var_0)));
}
