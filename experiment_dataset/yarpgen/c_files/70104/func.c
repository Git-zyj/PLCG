/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70104
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_10 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1]);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 += ((/* implicit */signed char) arr_6 [i_0] [(short)6] [i_2]);
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (max((3623866004205623416ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) (unsigned short)0))))) ? (var_3) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))))));
                        var_13 = ((/* implicit */int) ((arr_2 [i_0 + 3]) | (max((min((13578704638024733057ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_2] [16ULL])))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1))))))));
                    }
                } 
            } 
            arr_12 [i_0] [i_0] [i_0] = ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) <= ((-(((/* implicit */int) arr_0 [i_0])))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_21 [4] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) ((((arr_2 [i_0 + 1]) > (arr_2 [i_0 - 2]))) ? (((/* implicit */unsigned long long int) min((2363447101U), (2363447101U)))) : (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 4])))));
                            var_14 = ((_Bool) (~(max((((/* implicit */unsigned int) var_7)), (65504U)))));
                            var_15 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (_Bool)1)) >> (((var_6) - (5232564463176491927ULL))))) : (((((/* implicit */int) (_Bool)1)) | (arr_16 [i_0] [i_5] [i_6]))))));
                            arr_22 [i_0 + 4] [i_0] [i_0] = max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)28567))))), (((((/* implicit */_Bool) 976496547010342183ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(_Bool)1] [i_4] [i_6]))))) * (((/* implicit */int) arr_13 [i_0] [i_0 - 2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) max(((~(((/* implicit */int) max((var_0), (((/* implicit */signed char) (_Bool)0))))))), (min((((((/* implicit */_Bool) -1957744127)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)112)))), (((/* implicit */int) arr_14 [i_0 - 1] [i_0 + 4] [i_0 + 4]))))));
                            var_17 = (_Bool)1;
                        }
                    } 
                } 
                arr_31 [i_0] [15LL] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_17 [i_0] [i_0]))))))), ((-(min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1])), (arr_28 [i_0] [i_1] [i_4] [(_Bool)1] [i_0] [i_1])))))));
                var_18 = ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((((_Bool)0) ? (((/* implicit */int) arr_19 [i_0] [(_Bool)1] [i_4] [i_1] [i_1] [i_4])) : (((/* implicit */int) (unsigned char)128))))))) ? (((/* implicit */long long int) ((arr_7 [i_0 - 2] [i_0] [i_0 - 2]) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : (1931520195U)))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1]))) - (var_9))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [10ULL] [10ULL] [i_0] [10ULL] [i_1] [10ULL]))))))));
                var_19 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 4294901791U)) && ((_Bool)1)))) >= (((/* implicit */int) arr_3 [i_0 + 3] [i_1] [i_0])))))));
            }
        }
        var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)60579)) ? (((/* implicit */int) (short)10265)) : (((/* implicit */int) (_Bool)1))))));
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0 + 2] [i_0 + 2])) * (((/* implicit */int) (signed char)0))))) | (65505U)));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1931520194U)) ? ((-(((/* implicit */int) var_2)))) : ((+(((/* implicit */int) var_2))))));
    }
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_9))));
}
