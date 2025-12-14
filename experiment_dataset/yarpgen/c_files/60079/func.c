/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60079
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [(unsigned short)4] [7ULL] [i_1] [i_0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2]);
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 1503309472U);
                }
            } 
        } 
    } 
    var_17 = ((((_Bool) ((signed char) (_Bool)0))) ? (min((((/* implicit */int) (unsigned short)38302)), (466398140))) : (max((466398155), (((/* implicit */int) ((signed char) 14678044404569720419ULL))))));
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (signed char i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_17 [i_3] [i_3] [1] [0LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_3])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1])), (arr_1 [i_5 + 2] [i_5 + 1])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_1 [1] [i_5])) ? (arr_9 [i_5]) : (arr_9 [i_3])))))));
                    arr_18 [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) arr_4 [i_3] [i_4] [i_5] [i_3])))));
                    arr_19 [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_4] [i_5] [i_4])) ? (((((/* implicit */_Bool) arr_5 [i_5 + 2] [i_4] [i_5])) ? (((/* implicit */int) arr_4 [i_5 + 2] [i_4] [i_5] [i_3])) : (((/* implicit */int) arr_4 [i_5 + 1] [i_4] [8] [i_5])))) : (((((/* implicit */_Bool) arr_4 [i_5 + 2] [i_4] [i_5] [i_5])) ? (-297049130) : (((/* implicit */int) (unsigned char)135))))));
                }
            } 
        } 
        arr_20 [i_3] |= ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_3])), (((11775950791530436010ULL) << (((((/* implicit */int) (unsigned short)27223)) - (27205)))))));
        arr_21 [7] [(_Bool)1] = ((/* implicit */unsigned int) 14678044404569720419ULL);
    }
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
    {
        arr_25 [i_6] [i_6] = max((min((((/* implicit */unsigned long long int) ((arr_12 [11U] [i_6]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_6] [i_6])))))), (3768699669139831206ULL))), (((/* implicit */unsigned long long int) arr_13 [i_6])));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (long long int i_8 = 1; i_8 < 12; i_8 += 1) 
            {
                {
                    arr_31 [i_8] = ((((/* implicit */_Bool) arr_9 [i_6])) ? (((/* implicit */int) ((((((/* implicit */_Bool) 1595244854)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-124)))) <= (((/* implicit */int) arr_0 [i_6]))))) : (arr_16 [i_8 + 1] [i_8 + 1] [i_8 + 2]));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 12; i_9 += 2) 
                    {
                        for (short i_10 = 1; i_10 < 12; i_10 += 2) 
                        {
                            {
                                arr_38 [i_6] [i_6] [i_6] [(unsigned char)3] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((arr_23 [i_9 - 2] [i_9 - 2]) ? (((/* implicit */int) arr_23 [i_9 + 2] [i_9 + 2])) : (((/* implicit */int) arr_23 [i_9 - 2] [i_9 - 2]))))) + (((unsigned int) arr_23 [i_9 - 2] [i_9 - 2]))));
                                arr_39 [i_8] [i_8] = ((/* implicit */short) ((int) ((((((/* implicit */_Bool) -437724537)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned short)38295)))) > (((/* implicit */int) arr_14 [i_6] [i_10 + 2] [i_8 + 1])))));
                                arr_40 [i_6] [i_6] [i_6] [i_6] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9 + 1] [i_10 + 2])) ? (((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1] [i_8 - 1] [i_6])) : (((/* implicit */int) ((((/* implicit */long long int) max((arr_15 [i_6]), (((/* implicit */unsigned int) var_3))))) <= (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) 2793973251U)) : (arr_9 [i_9]))))))));
                                arr_41 [i_9 - 1] [i_9 - 1] [4] [i_9 - 1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)47754)), (1837269214)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 16837765040150986741ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111)))))))) : (((((/* implicit */_Bool) -1595244854)) ? (674496644341777632ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8 - 1] [i_8 - 1] [i_8] [i_8])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 1) 
                    {
                        for (signed char i_12 = 1; i_12 < 11; i_12 += 2) 
                        {
                            {
                                arr_46 [i_11] [i_6] [i_8 + 1] [i_8 + 1] [i_8 + 1] = ((((/* implicit */_Bool) ((unsigned int) arr_28 [i_8] [i_8 + 2] [i_8 + 2] [i_6]))) ? (((arr_28 [i_8] [i_7] [i_8 + 2] [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_12] [i_6] [i_8 + 2] [i_6]))) : (1479994446U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4363806109525383048ULL)) ? (((/* implicit */int) arr_28 [i_11] [i_11] [i_8 + 1] [i_6])) : (((/* implicit */int) arr_28 [i_8] [i_11] [i_8 + 2] [i_8]))))));
                                arr_47 [i_6] [i_7] [i_7] [9ULL] [i_11] [i_6] [i_12] = ((/* implicit */unsigned char) arr_42 [i_6] [i_7] [i_8] [i_12 + 2] [i_12] [i_12]);
                                arr_48 [i_7] [i_7] [i_7] [i_11] [i_8] [i_7] = ((/* implicit */int) min((arr_43 [(_Bool)1] [(unsigned short)8] [(unsigned short)8] [i_11] [i_12 + 1] [i_12 + 3]), (((((/* implicit */_Bool) arr_43 [i_6] [i_12] [i_8 + 2] [i_6] [5LL] [i_11 - 1])) ? (arr_43 [i_11 + 1] [i_7] [i_8] [i_11 + 1] [i_12] [i_11]) : (arr_43 [i_7] [i_6] [i_8 + 1] [i_11] [i_6] [i_11 + 1])))));
                            }
                        } 
                    } 
                    arr_49 [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (arr_26 [i_6])))), (arr_22 [i_6])));
                }
            } 
        } 
    }
    var_18 |= ((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_15))));
    var_19 = min((((/* implicit */long long int) var_0)), (min((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)135))))))));
}
