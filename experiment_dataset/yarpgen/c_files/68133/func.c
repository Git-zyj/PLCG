/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68133
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
    var_12 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) (-((-(((/* implicit */int) (short)16866))))))) ? (((((/* implicit */unsigned long long int) 598416819)) * (var_10))) : (((/* implicit */unsigned long long int) arr_5 [i_0])));
                            var_13 ^= ((/* implicit */unsigned short) arr_12 [i_2] [i_2 + 1] [i_2] [i_2]);
                            arr_16 [(_Bool)1] [i_1 + 1] [16LL] [i_2] [16LL] = ((/* implicit */int) (~(9137467278108390828ULL)));
                        }
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((var_4), (var_5)))))) ? (((((/* implicit */_Bool) (+(-5975766798405657704LL)))) ? ((~(8869363261391343490LL))) : (((((/* implicit */_Bool) -5975766798405657693LL)) ? (7374176569343388805LL) : (5975766798405657676LL))))) : (max((-5975766798405657711LL), (((/* implicit */long long int) arr_10 [i_1] [i_1 - 1]))))));
                            arr_20 [i_1] [i_1] [i_2] [i_3] [12ULL] [i_2] = ((((/* implicit */_Bool) min((-5975766798405657693LL), (3128431877635847787LL)))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 5975766798405657678LL)) && (((/* implicit */_Bool) 7463195848008306481LL))))) + (((/* implicit */int) ((unsigned short) 5975766798405657696LL)))))));
                        }
                        arr_21 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (short)-21302);
                        arr_22 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-7336202311622623641LL) : (4713912957294199643LL)))) ? (max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_13 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_2 + 1] [i_1] [i_1 - 2]))))) + (((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0])) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_2] [i_2] [i_2] [i_0])) ? (-8496255039855874273LL) : (((/* implicit */long long int) -1102522555)))) : (((/* implicit */long long int) 353004049U))))));
                    }
                    arr_23 [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) -8869363261391343491LL));
                    arr_24 [i_0] [i_0] [i_2] [i_2] = (unsigned short)36619;
                    arr_25 [12ULL] [i_2] = ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */long long int) arr_5 [i_0])) | (9113671508145895992LL))))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)11556)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)16866))))))), (var_1)));
}
