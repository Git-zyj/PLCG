/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7844
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_16 &= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)70)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 2])));
        var_17 = ((/* implicit */unsigned char) arr_1 [i_0 - 2]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 6; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_3 - 1] [i_2])) ? (2564952228088020940LL) : (arr_5 [i_0 - 2])));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(unsigned short)3] [(unsigned short)3])) : ((-(((/* implicit */int) arr_10 [7U] [7U] [i_2] [i_2]))))));
                                arr_12 [i_0 + 1] [i_0 - 1] [i_0] [i_1] [i_0] = 0LL;
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) -1);
                                arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_1 [i_3 - 1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [i_0]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)48379)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (short)(-32767 - 1))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48402)))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)44082))));
                    arr_15 [i_1] [(unsigned char)6] [i_2] = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))));
                }
            } 
        } 
        var_21 = ((arr_3 [(unsigned char)4]) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10565))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 0)) <= (3432440471305156389LL)));
    }
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) (+(var_4)))) && (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (var_12))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) var_10)))))));
    /* LoopSeq 3 */
    for (int i_5 = 1; i_5 < 19; i_5 += 3) 
    {
        var_25 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) -29)) ? (((/* implicit */unsigned long long int) 3046804100925053253LL)) : (3284820664811642213ULL)))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)44082))))))) ? ((~((~(((/* implicit */int) arr_18 [i_5 + 2])))))) : ((~((~(((/* implicit */int) (unsigned short)32242))))))));
    }
    /* vectorizable */
    for (short i_6 = 4; i_6 < 8; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_6 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11ULL)));
        var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_6 - 1])) ? (((/* implicit */int) (short)7121)) : (((/* implicit */int) arr_6 [i_6 - 1] [i_6 + 1] [i_6 - 2]))));
        var_28 = ((/* implicit */unsigned long long int) (((+(arr_5 [i_6]))) + (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)33270)) : (((/* implicit */int) (signed char)25)))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_25 [i_7] [i_7]))))) ? ((-(((/* implicit */int) arr_25 [i_7] [i_7])))) : ((+(((/* implicit */int) arr_25 [i_7] [i_7]))))));
        arr_27 [i_7] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_25 [i_7] [i_7]))))));
        var_30 += ((/* implicit */unsigned int) (signed char)-11);
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [(_Bool)1])) ? (((/* implicit */long long int) (+(-336069407)))) : (((arr_24 [i_7]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_25 [i_7] [i_7])) : (((/* implicit */int) arr_25 [i_7] [i_7]))))) : (((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7] [i_7]))) : (-3432440471305156385LL)))))));
    }
}
