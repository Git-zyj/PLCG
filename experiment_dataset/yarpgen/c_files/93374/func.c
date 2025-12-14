/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93374
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((short) var_4))) ? (((((/* implicit */_Bool) 17523466567680ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_15))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)13825))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_1))))))))));
        var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)1634)))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */int) ((short) var_8))) > (((/* implicit */int) (short)-6135)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_14 [i_3 - 1] [(short)9] [i_1] = min((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) > (var_15)))) << (((((/* implicit */int) max((((/* implicit */short) var_1)), (var_2)))) - (14820))))), (((/* implicit */int) (unsigned short)0)));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_1))))))) ? ((+(((/* implicit */int) var_11)))) : (max((((/* implicit */int) var_16)), (((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)59)))))))))));
                        arr_15 [i_1] [i_1 - 1] [i_1] [(unsigned char)13] = ((/* implicit */signed char) ((min((((((/* implicit */int) (unsigned short)65522)) - (((/* implicit */int) (unsigned char)255)))), (((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) (signed char)24)))))) * (((/* implicit */int) var_2))));
                        var_22 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_10))))))));
                    }
                } 
            } 
            arr_16 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (2022002872U)))) && (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (unsigned short)65517)))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (signed char)61))))));
        }
    }
    for (short i_4 = 1; i_4 < 11; i_4 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_1)) - (169)))))))) : (max((((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)240))))), (((((/* implicit */_Bool) var_19)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))))));
        arr_19 [(short)0] [i_4] = ((/* implicit */unsigned int) ((unsigned char) var_18));
        arr_20 [i_4 - 1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) max((max(((unsigned short)65535), (((/* implicit */unsigned short) var_5)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))) << (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((short) var_16))))))));
    }
    /* vectorizable */
    for (long long int i_5 = 3; i_5 < 23; i_5 += 4) 
    {
        arr_25 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) / (var_19)));
        var_24 = ((short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))));
    }
    /* LoopSeq 1 */
    for (short i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_14)), ((unsigned char)111)))) : (((var_14) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)40778)) >= (((/* implicit */int) var_3)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))) : (var_0)));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((unsigned char) var_18)))));
        arr_29 [(short)2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (2272964424U)))) ? (((((/* implicit */int) var_18)) & (((/* implicit */int) var_5)))) : (((/* implicit */int) min((var_14), (var_16))))))) ? (((((((/* implicit */int) var_14)) >> (((/* implicit */int) var_3)))) >> (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) : (2022002858U))) - (242U))))) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (0U))) && (((/* implicit */_Bool) max((((/* implicit */short) var_7)), (var_2)))))))));
        var_27 = ((/* implicit */short) (~(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)10374))))));
        var_28 -= ((/* implicit */unsigned int) var_8);
    }
    var_29 = ((/* implicit */short) var_15);
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (short)-15701))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)248), (((/* implicit */unsigned char) (signed char)-86)))))) : (max((var_19), (((/* implicit */long long int) var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) var_19)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5))))))))));
}
