/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98772
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) ((signed char) (!(((((/* implicit */int) (signed char)-45)) >= (((/* implicit */int) (unsigned char)255)))))));
                    var_19 = ((/* implicit */unsigned short) max((((int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL)))), ((~(((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 1] [i_1]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) * (var_9)))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2761624563229716876LL)) ? (10991847544484128913ULL) : (((/* implicit */unsigned long long int) -5845175776467709007LL))))) ? (((/* implicit */int) (signed char)-45)) : (((((/* implicit */_Bool) 10991847544484128913ULL)) ? (((/* implicit */int) (short)-16856)) : (((/* implicit */int) var_3))))))) : ((-(-5148699537106942376LL)))));
    var_21 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                var_22 |= ((/* implicit */unsigned char) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((unsigned char)239), (((/* implicit */unsigned char) (_Bool)1)))))));
                arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) arr_11 [i_4]);
                /* LoopSeq 4 */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) var_17)))), (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_18 [i_4 + 1] [i_4 + 1] [i_4 + 1]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                    {
                        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_6 + 2])) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) var_6)) ? (arr_17 [17U] [i_5] [(_Bool)0] [i_3]) : (((/* implicit */long long int) var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_19 [i_3] [i_6] [i_6 + 1] [i_6 - 1] [i_6])) ? (arr_19 [i_4 + 1] [i_5] [i_6] [i_6 + 2] [i_6 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6 + 2])))))));
                        arr_21 [i_4] = ((/* implicit */unsigned int) arr_11 [i_3]);
                        var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((arr_13 [i_6 + 2] [i_4 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104)))))), (((((/* implicit */_Bool) arr_14 [i_6 - 1] [i_4 + 1] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5]))) : (-5845175776467709007LL)))) : (5508537087349821667ULL)))));
                        arr_22 [(unsigned char)8] [i_4 + 1] [i_4] [i_4 + 1] [(_Bool)1] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 10991847544484128913ULL)) ? (arr_18 [i_3] [i_4 + 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_17 [i_3] [(signed char)11] [(_Bool)1] [(signed char)12]) : (-5845175776467709007LL))) : (((/* implicit */long long int) ((int) -5845175776467709007LL)))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)255), (((unsigned char) (_Bool)1)))))) & (((((/* implicit */_Bool) (unsigned char)255)) ? (7454896529225422703ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103)))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_15)) | (((/* implicit */int) arr_23 [i_3] [i_3] [i_4 + 1] [i_5] [i_7] [i_7])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_3] [i_4 + 1])) & (((/* implicit */int) arr_12 [(unsigned char)6] [i_3]))))) ? ((~(arr_9 [i_4 + 1] [i_3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (arr_18 [i_3] [i_4] [i_5])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (short)27651)) : (-1403070419)))) ? (max((0LL), (((/* implicit */long long int) arr_11 [8LL])))) : (min((arr_17 [i_7] [i_5] [(unsigned char)12] [i_3]), (426707615120817395LL)))))));
                        var_28 = ((/* implicit */int) min((((((/* implicit */_Bool) 3168427536U)) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) -9223372036854775794LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_7] [i_5] [i_4 + 1] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_20 [i_3] [1ULL] [7LL] [i_7])) : (((/* implicit */int) var_15))))) : (((((/* implicit */unsigned int) arr_10 [i_3])) / (arr_9 [i_3] [i_5]))))))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))))), (11967107192374218451ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_16 [14U] [i_4 + 1] [i_5] [i_7]))) ? (((((/* implicit */_Bool) arr_12 [i_3] [i_4])) ? (1126539759U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3] [(signed char)18] [i_5] [i_7]))))) : (((((/* implicit */_Bool) arr_25 [i_3] [i_4] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_19 [(signed char)5] [i_4 + 1] [i_3] [1] [i_4 + 1])))))))))));
                        arr_27 [i_3] [i_4 + 1] [i_4] [i_5] [i_7] = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1434888516U)) ? (((/* implicit */int) (unsigned short)52633)) : (arr_10 [i_5])))))));
                    }
                }
                for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    var_30 -= max((((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) arr_14 [i_8] [i_4] [i_3])))), (6479636881335333165ULL));
                    arr_31 [i_4] [19U] [i_3] [i_4] = ((short) ((((/* implicit */_Bool) (unsigned short)28081)) ? (((((/* implicit */_Bool) (unsigned short)37455)) ? (arr_9 [i_4] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (min((2121104169U), (((/* implicit */unsigned int) var_6))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_10 = 3; i_10 < 19; i_10 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned int) ((int) arr_33 [i_10 + 1] [i_4] [(unsigned short)1] [i_10]));
                        arr_37 [i_10 - 2] [i_4] [(unsigned char)5] [i_4] [i_3] = (~(((((/* implicit */_Bool) var_8)) ? (arr_10 [(unsigned char)5]) : (((/* implicit */int) arr_11 [i_3])))));
                    }
                    for (short i_11 = 3; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        var_32 ^= ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))), (var_1)))) / (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_3] [i_4 + 1] [i_4 + 1] [i_4 + 1] [(signed char)13] [i_11 + 1])) ? (1066782729) : (((/* implicit */int) arr_35 [i_3] [i_4] [i_9] [i_9] [i_9] [(unsigned char)14]))))), (arr_29 [1ULL] [i_4 + 1] [i_9])))));
                        arr_40 [i_4] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_29 [i_4] [i_4 + 1] [i_11 - 3])) ? (arr_29 [i_3] [i_4 + 1] [i_11 + 2]) : (arr_29 [i_3] [i_4 + 1] [i_11 - 3])))));
                    }
                    arr_41 [i_4] [i_3] [i_4 + 1] [(unsigned short)13] = ((/* implicit */_Bool) arr_38 [i_9] [i_9] [i_4 + 1] [i_4] [3] [i_3]);
                }
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    arr_44 [i_3] [i_3] [i_4] [(unsigned short)13] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) > (2052405264U))) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) arr_25 [i_4] [i_4 + 1] [i_4]))));
                    arr_45 [i_12] [i_4] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [(signed char)0] [i_4] [i_4 + 1])) ? (arr_29 [i_3] [i_4] [i_4 + 1]) : (arr_29 [i_3] [i_4] [i_4 + 1])));
                }
            }
        } 
    } 
}
