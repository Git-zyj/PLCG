/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94912
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
    var_17 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) 8188U)), (416698800526568166LL)));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_14 [i_0 - 1] [i_1] [i_2] [i_3] = ((/* implicit */int) max(((((!(((/* implicit */_Bool) 8187U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)768))) : ((~(arr_1 [i_0 - 1] [(_Bool)1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) arr_10 [i_0 - 1])))))));
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((4160182529076684063LL) * (((/* implicit */long long int) ((/* implicit */int) var_11)))))) / (1518055322543214862ULL)))) ? (((long long int) min((4160182529076684073LL), (((/* implicit */long long int) 93020368U))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(8201U)))))));
                    }
                } 
            } 
        } 
        arr_15 [(unsigned short)2] = max((min((((/* implicit */int) arr_8 [i_0] [(signed char)0] [i_0 - 1])), (var_12))), (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0 - 1])));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_20 [i_5] [(short)4] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_19 += arr_7 [i_0];
                                var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */int) max(((signed char)112), (arr_7 [i_7])))) << (((((/* implicit */int) ((unsigned short) 4160182529076684063LL))) - (58649)))))));
                            }
                        } 
                    } 
                    arr_27 [i_5] [3] [3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [(signed char)4] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) 2426015816U)) ? (arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5]) : (arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71))) - (arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5])))));
                }
            } 
        } 
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((long long int) (unsigned char)64));
        var_22 -= ((/* implicit */short) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) -1023131110)) : (4294959090U))))), (((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)120))))) & (((/* implicit */int) var_14))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                {
                    var_23 = ((/* implicit */int) min((var_23), ((+(((/* implicit */int) (!(((/* implicit */_Bool) 416698800526568194LL)))))))));
                    arr_36 [8ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4160182529076684063LL)) ? (((/* implicit */long long int) 0U)) : (-5183489656937608808LL)))) ? (((/* implicit */int) ((arr_26 [i_8 - 1] [i_8 - 1] [i_8] [6LL] [i_8 - 1]) <= (3458764513820540928LL)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_8 - 1])) && (((/* implicit */_Bool) -570807926)))))));
                    var_24 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32819)) || (((/* implicit */_Bool) ((int) (~(416698800526568166LL)))))));
                    /* LoopSeq 3 */
                    for (int i_11 = 1; i_11 < 10; i_11 += 4) 
                    {
                        arr_40 [i_8] [(short)3] [8] [i_11] = min((max(((-(-5183489656937608816LL))), (((long long int) (signed char)60)))), (min((((((/* implicit */_Bool) arr_35 [4LL] [i_9] [0])) ? (var_13) : (-3180340118124356257LL))), (((/* implicit */long long int) ((-4160182529076684063LL) != (var_2)))))));
                        var_25 = ((/* implicit */unsigned int) ((unsigned long long int) min((17899749099903118129ULL), (((/* implicit */unsigned long long int) 416698800526568161LL)))));
                    }
                    for (short i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                    {
                        var_26 *= ((/* implicit */int) min((4160182529076684065LL), (((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_11)), (var_14))))) : (min((5183489656937608822LL), (((/* implicit */long long int) (unsigned short)0))))))));
                        arr_44 [1LL] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) (unsigned char)193))) < (((arr_9 [i_8] [i_9] [(unsigned short)5]) ? (4160182529076684068LL) : (((/* implicit */long long int) 3221225472U))))));
                    }
                    for (short i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((unsigned int) ((int) 573592074U))))));
                        var_28 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((((/* implicit */int) (short)26424)) == (((/* implicit */int) (unsigned short)65517))))) / (((/* implicit */int) ((signed char) arr_34 [i_9] [i_9]))))), (((int) ((long long int) var_7)))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_42 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))));
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) 511U))));
                        arr_47 [i_8] [i_8 - 1] [i_8] [i_8] [i_8] = ((/* implicit */short) ((long long int) min(((~(((/* implicit */int) arr_2 [i_13])))), (arr_30 [i_8 - 1]))));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_15 = 1; i_15 < 8; i_15 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 2; i_17 < 10; i_17 += 3) 
                {
                    {
                        arr_58 [(short)3] [i_14] [i_16] = ((/* implicit */long long int) (((+(((/* implicit */int) ((unsigned char) var_9))))) & (arr_34 [i_14] [6U])));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((long long int) min((arr_1 [i_17] [4ULL]), (((/* implicit */unsigned long long int) ((1134907106097364992LL) << (((((((/* implicit */int) var_16)) + (134))) - (50))))))))))));
                        var_33 = ((/* implicit */signed char) var_2);
                        arr_59 [i_14] [i_15] = ((/* implicit */short) min((((/* implicit */long long int) max((arr_51 [i_14 - 1] [i_15 - 1]), (((/* implicit */int) (short)21919))))), (((long long int) (unsigned char)200))));
                        var_34 = ((/* implicit */_Bool) (short)-21919);
                    }
                } 
            } 
            arr_60 [i_14] [i_14] = ((/* implicit */int) max((((unsigned int) ((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_14] [i_14])))))), (((/* implicit */unsigned int) var_1))));
            arr_61 [6LL] |= ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_16), (((/* implicit */signed char) (_Bool)0)))))) : (min((((/* implicit */long long int) (_Bool)0)), (var_7))))) % (min((((/* implicit */long long int) min(((short)21913), (((/* implicit */short) arr_2 [i_14 - 1]))))), (arr_43 [i_14] [i_15 + 3] [8]))));
        }
        for (long long int i_18 = 0; i_18 < 11; i_18 += 2) 
        {
            arr_65 [i_18] [8U] [i_18] |= ((/* implicit */short) (((~(arr_21 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_18]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_14]))) != (max((((/* implicit */unsigned int) arr_2 [i_14])), (arr_24 [i_14 - 1] [i_18] [i_14] [(signed char)2])))))))));
            var_35 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) (_Bool)1))))) % (((((/* implicit */_Bool) (signed char)7)) ? (3827133793616668591ULL) : (((/* implicit */unsigned long long int) arr_35 [i_14] [i_18] [i_18])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 432699908)) ? (((/* implicit */int) (signed char)45)) : (((((/* implicit */int) (short)-21927)) ^ (-1326562397))))))));
            arr_66 [i_14] [i_18] = ((/* implicit */int) min(((-(-5440897018761013998LL))), (((/* implicit */long long int) arr_62 [i_14 - 1] [i_14] [i_18]))));
        }
        arr_67 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (-1644892690)))) * (min((((/* implicit */unsigned int) (unsigned char)174)), (3221225487U)))));
    }
    for (long long int i_19 = 0; i_19 < 13; i_19 += 4) 
    {
        arr_70 [i_19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_6))) >> (((min((var_15), (((/* implicit */int) (signed char)23)))) + (1707364399))))))));
        var_36 = ((/* implicit */long long int) ((((17605231795869580066ULL) <= (((/* implicit */unsigned long long int) -35724702)))) && (((/* implicit */_Bool) ((long long int) (_Bool)1)))));
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (long long int i_21 = 2; i_21 < 12; i_21 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_22 = 0; i_22 < 13; i_22 += 4) 
                    {
                        for (int i_23 = 4; i_23 < 12; i_23 += 2) 
                        {
                            {
                                arr_84 [i_19] [i_20] [9] [i_22] [i_23 - 1] [1ULL] = ((/* implicit */int) -416698800526568162LL);
                                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((max((65970697666560LL), (((/* implicit */long long int) (_Bool)1)))) + (((/* implicit */long long int) ((((/* implicit */int) arr_77 [i_21 - 1])) / (((/* implicit */int) arr_77 [i_21 + 1]))))))))));
                            }
                        } 
                    } 
                    arr_85 [i_19] [i_20] [i_21 + 1] [i_19] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-127))))), ((((~(var_8))) << (((var_2) - (8731526110761107464LL)))))));
                    arr_86 [i_21 - 2] [(_Bool)1] = ((/* implicit */long long int) min((((((((/* implicit */unsigned long long int) arr_73 [i_19] [i_20])) * (arr_78 [i_19] [i_20] [i_19] [i_19] [i_20] [i_20]))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-28))))))), (((/* implicit */unsigned long long int) var_14))));
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_16)), (var_5)))), (max((((/* implicit */unsigned long long int) var_1)), (arr_78 [i_19] [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_20] [i_20]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_24 = 0; i_24 < 13; i_24 += 4) 
        {
            for (short i_25 = 0; i_25 < 13; i_25 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_26 = 2; i_26 < 12; i_26 += 3) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 13; i_27 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((long long int) 61440LL)))));
                                arr_97 [i_19] [10U] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_82 [(_Bool)1] [i_24] [(_Bool)1] [i_24]), ((signed char)101)))) ? (min((3414619795U), (((/* implicit */unsigned int) (signed char)-33)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224)))))) ? (max(((((_Bool)1) ? (var_4) : (((/* implicit */long long int) arr_95 [i_19] [i_26])))), (var_13))) : (((/* implicit */long long int) (+((-(((/* implicit */int) arr_68 [i_19] [i_26])))))))));
                                var_40 *= ((/* implicit */_Bool) ((signed char) max(((+(2069057760))), (((/* implicit */int) ((((/* implicit */_Bool) 65970697666560LL)) && (((/* implicit */_Bool) (signed char)-53))))))));
                                var_41 -= ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned char)248)), (3601277818U)));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (min((((/* implicit */long long int) (signed char)16)), (var_7)))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_28 = 0; i_28 < 13; i_28 += 4) 
    {
        for (long long int i_29 = 0; i_29 < 13; i_29 += 4) 
        {
            {
                arr_104 [i_28] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)132))));
                var_43 -= ((/* implicit */unsigned char) ((17592186044408LL) / (((/* implicit */long long int) (+(min((var_12), (((/* implicit */int) var_9)))))))));
                arr_105 [i_28] [i_28] [(unsigned char)2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (unsigned char)106)))) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */int) (short)3643)) * (((/* implicit */int) arr_103 [i_29] [i_29] [i_29])))))));
            }
        } 
    } 
}
